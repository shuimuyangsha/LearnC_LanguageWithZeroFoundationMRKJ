#include<stdio.h>
#include<winsock.h>		/*引入winsock头文件*/
#pragma comment(lib,"ws2_32.lib")


int  main()
{
	/*-----------------------------------------*/
	/*------------定义变量---------------------*/
	/*-----------------------------------------*/
	char Sendbuf[100];		/*发送数据的缓冲区*/
	char Receivebuf[100];	/*接受数据的缓冲区*/
	int SendLen;			/*发送数据的长度*/
	int	ReceiveLen;			/*接收数据的长度*/
	int Length;				/*表示SOCKADDR的大小*/

	SOCKET socket_server;	/*定义服务器套接字*/
	SOCKET socket_receive;  /*定义用于连接套接字*/

	SOCKADDR_IN Server_add;	/*服务器地址信息结构*/
	SOCKADDR_IN Client_add;	/*客户端地址信息结构*/

	WORD wVersionRequested;	/*字（word）：unsigned short*/
	WSADATA wsaData;		/*库版本信息结构*/
	int error;				/*表示错误*/

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
		return 0;	/*程序结束*/
	}
	/*判断请求加载的版本号是否符合要求*/
	if ( LOBYTE( wsaData.wVersion ) != 2 ||
		   HIBYTE( wsaData.wVersion ) != 2 ) 
	{	
		WSACleanup( );	/*不符合，关闭套接字库*/
		return 0;		/*程序结束*/
	}

	/*-----------------------------------------*/
	/*------------设置连接地址-----------------*/
	/*-----------------------------------------*/
	Server_add.sin_family=AF_INET;/*地址家族，对于必须是AF_INET，注意只有它不是网络网络字节顺序*/
	Server_add.sin_addr.S_un.S_addr=htonl(INADDR_ANY);/*主机地址*/
	Server_add.sin_port=htons(5000);/*端口号*/

	/*------------创建套接字-------------------*/
	/*AF_INET表示指定地址族，SOCK_STREAM表示流式套接字TCP，特定的地址家族相关的协议。*/
	socket_server=socket(AF_INET,SOCK_STREAM,0);

	/*-----------------------------------------*/
	/*---绑定套接字到本地的某个地址和端口上----*/
	/*-----------------------------------------*/
			/*socket_server为套接字，(SOCKADDR*)&Server_add为服务器地址*/
	if(bind(socket_server,(SOCKADDR*)&Server_add,sizeof(SOCKADDR) )==SOCKET_ERROR)
	{
		printf("绑定失败\n");
	}

	/*-----------------------------------------*/
	/*------------设置套接字为监听状态---------*/
	/*-----------------------------------------*/
		/*监听状态，为连接做准备，最大等待的数目为5*/
	if(listen(socket_server,5)<0)
	{
		printf("监听失败\n");
	}
	
	/*-----------------------------------------*/
	/*------------接受连接---------------------*/
	/*-----------------------------------------*/
	Length=sizeof(SOCKADDR);
	/*接受客户端的发送请求,等待客户端发送connect请求*/
	socket_receive=accept(socket_server,(SOCKADDR*)&Client_add,&Length);
	if(socket_receive==SOCKET_ERROR)
	{
		printf("接受连接失败");
	}

	/*-----------------------------------------*/
	/*--------------进行聊天-------------------*/
	/*-----------------------------------------*/
	while(1)						/*无限循环*/
	{	
		
		/*--------接收数据---------*/
		ReceiveLen =recv(socket_receive,Receivebuf,100,0);
		if(ReceiveLen<0)
		{
			printf("接收失败\n");
			printf("程序退出\n");
			break;
		}
		else
		{
			printf("client say: %s\n",Receivebuf);
		}	
		
		/*--------发送数据---------*/
		printf("please enter message:");
		scanf("%s",Sendbuf);
		SendLen=send(socket_receive,Sendbuf,100,0);
		if(SendLen<0)
		{
			printf("发送失败\n");
		}
	}

	/*-----------------------------------------*/
	/*---------释放套接字，关闭动态库----------*/
	/*-----------------------------------------*/
	closesocket(socket_receive);	/*释放客户端的套接字资源*/
	closesocket(socket_server);/*释放套接字资源*/
	WSACleanup();/*关闭动态链接库*/
	return 0;
}