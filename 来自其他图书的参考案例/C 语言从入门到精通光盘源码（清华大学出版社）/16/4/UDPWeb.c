#include<stdio.h>
#include<winsock.h>							/*引入winsock头文件*/

int  main()
{
	/*------------------------------------------------------------------*/
	/*----------------------定义变量--------------------------------*/
	/*------------------------------------------------------------------*/
	char Receivebuf[100];					/*接受数据的缓冲区*/
	int length;

	SOCKET socket_send;					/*定义套接字*/
	SOCKADDR_IN Server_add;				/*服务器地址信息结构*/
	SOCKADDR_IN Client_add;				/*客户端地址信息结构*/

	WORD wVersionRequested;				/*字（word）：unsigned short*/
	WSADATA wsaData;					/*库版本信息结构*/
	int error;							/*表示错误*/

	/*------------------------------------------------------------------*/
	/*-------------------------初始化套接字库---------------------------*/
	/*------------------------------------------------------------------*/
				/*定义版本类型。将两个字节组合成一个字，前面是第字节，后面是高字节*/
	wVersionRequested = MAKEWORD( 2, 2 );	
				/*加载套接字库，初始化Ws2_32.dll动态链接库*/
	error = WSAStartup( wVersionRequested, &wsaData);	
	if(error!=0)
	{
		printf("加载套接字失败！");
		return 0;							/*程序结束*/
	}
				/*判断请求加载的版本号是否符合要求*/
	if ( LOBYTE( wsaData.wVersion ) != 2 ||
		   HIBYTE( wsaData.wVersion ) != 2 ) 
	{	
		WSACleanup( );					/*不符合，关闭套接字库*/
		return 0;							/*程序结束*/
	}

	/*创建套接字*/
	socket_send=socket(AF_INET,SOCK_DGRAM,0);

	/*----------------------设置服务器地址-----------------------*/
	Server_add.sin_family=AF_INET;/*地址家族，对于必须是AF_INET，注意只有它不是网络网络字节顺序*/
	Server_add.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	Server_add.sin_port=htons(5000);/*端口号*/

	/*绑定套接字*/
	bind(socket_send,(SOCKADDR*)&Server_add,sizeof(SOCKADDR));
	
	length=sizeof(SOCKADDR);

	recvfrom(socket_send,Receivebuf,100,0,(SOCKADDR*)&Client_add,&length);
	
	printf("%s\n",Receivebuf);

	/*------------------------------------------------------------------*/
	/*-----------------------释放套接字，关闭动态库----------*/
	/*------------------------------------------------------------------*/
	closesocket(socket_send);				/*释放套接字资源*/
	WSACleanup();							/*关闭动态链接库*/
	return 0;
}
