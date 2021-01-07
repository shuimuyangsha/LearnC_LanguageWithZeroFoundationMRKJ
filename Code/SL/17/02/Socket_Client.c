#include<stdio.h>
#include<winsock.h>		/*引入winsock头文件*/
#pragma comment(lib,"ws2_32.lib")

int  main()
{
	/*-----------------------------------------*/
	/*------------定义变量---------------------*/
	/*-----------------------------------------*/
	char Sendbuf[100];				/*发送数据的缓冲区*/
	char Receivebuf[100];			/*接受数据的缓冲区*/
	int	SendLen;					/*发送数据的长度*/
	int	ReceiveLen;					/*接收数据的长度*/

	SOCKET socket_send;				/*定义套接字*/

	SOCKADDR_IN Server_add;			/*服务器地址信息结构*/

	WORD wVersionRequested;			/*字（word）：unsigned short*/
	WSADATA wsaData;				/*库版本信息结构*/
	int error;						/*表示错误*/

	/*-----------------------------------------*/
	/*------------初始化套接字库---------------*/
	/*-----------------------------------------*/
				/*定义版本类型。将两个字节组合成一个字，前面是第字节，后面是高字节*/
	wVersionRequested = MAKEWORD( 2, 2 );	
				/*加载套接字库，初始化Ws2_32.dll动态链接库*/
	error = WSAStartup( wVersionRequested, &wsaData);	
	if(error!=0)
	{
		printf("加载套接字失败！");
		return 0;					/*程序结束*/
	}
				/*判断请求加载的版本号是否符合要求*/
	if ( LOBYTE( wsaData.wVersion ) != 2 ||
		   HIBYTE( wsaData.wVersion ) != 2 ) 
	{	
		WSACleanup( );				/*不符合，关闭套接字库*/
		return 0;					/*程序结束*/
	}

	/*-----------------------------------------*/
	/*------------设置服务器地址---------------*/
	/*-----------------------------------------*/
	Server_add.sin_family=AF_INET;/*地址家族，对于必须是AF_INET，注意只有它不是网络网络字节顺序*/
	/*服务器的地址，将一个点分十进制表示为IP地址，inet_ntoa是将地址转成字符串*/
	Server_add.sin_addr.S_un.S_addr = inet_addr("192.168.1.238");
	Server_add.sin_port=htons(5000);/*端口号*/

	/*-----------------------------------------*/
	/*-------------进行连接服务器--------------*/
	/*-----------------------------------------*/
	/*客户端创建套接字，但是不需要绑定的，只需要和服务器建立起连接就可以了，*/
	/*socket_sendr表示的是套接字，Server_add服务器的地址结构*/
	socket_send=socket(AF_INET,SOCK_STREAM,0);

	/*-----------------------------------------*/
	/*-------------创建用于连接的套接字--------*/
	/*-----------------------------------------*/
	/*AF_INET表示指定地址族，SOCK_STREAM表示流式套接字TCP，特定的地址家族相关的协议。*/
	if(connect(socket_send,(SOCKADDR*)&Server_add,sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		printf("连接失败!\n");
	}
	
	/*-----------------------------------------*/
	/*--------------进行聊天-------------------*/
	/*-----------------------------------------*/
	while(1)	/*无限循环*/
	{	
		/*---------------发送数据过程----------*/
		printf("please enter message:");
		scanf("%s",Sendbuf);
		SendLen = send(socket_send,Sendbuf,100,0);		/*发送数据*/
		if(SendLen < 0)
		{
			printf("发送失败!\n");
		}

		/*--------------接收数据过程---------------*/
		ReceiveLen =recv(socket_send,Receivebuf,100,0);	/*接受数据*/
		if(ReceiveLen<0)
		{
			printf("接收失败\n");
			printf("程序退出\n");
			break;
		}
		else
		{
			printf("Server say: %s\n",Receivebuf);
		}	
	}

	/*-----------------------------------------*/
	/*---------释放套接字，关闭动态库----------*/
	/*-----------------------------------------*/
	closesocket(socket_send);/*释放套接字资源*/
	WSACleanup();/*关闭动态链接库*/
	return 0;
}