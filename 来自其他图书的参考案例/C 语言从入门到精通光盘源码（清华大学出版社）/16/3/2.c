#include<stdio.h>
#include<winsock.h>							/*����winsockͷ�ļ�*/

int  main()
{
	/*----------------------�������--------------------------------*/
	char Receivebuf[100];					/*��������*/
	char Sendbuf[100];
	int	ReceiveLen;						/*�������ݵĳ���*/
	int SendLen;

	SOCKET socket_send;					/*�����׽���*/
	SOCKADDR_IN Server_add;				/*��������ַ��Ϣ�ṹ*/

	WORD wVersionRequested;				/*�֣�word����unsigned short*/
	WSADATA wsaData;					/*��汾��Ϣ�ṹ*/
	int error;								/*��ʾ����*/

	/*---------------------��ʼ���׽��ֿ�------------------------*/
				/*����汾���͡�*/
	wVersionRequested = MAKEWORD( 2, 2 );	
				/*��ʼ��Ws2_32.dll��̬���ӿ�*/
	error = WSAStartup( wVersionRequested, &wsaData);	
	if(error!=0)
	{
		printf("�����׽���ʧ�ܣ�");
		return 0;							/*�������*/
	}
				/*�ж�������صİ汾���Ƿ����Ҫ��*/
	if ( LOBYTE( wsaData.wVersion ) != 2 ||
		   HIBYTE( wsaData.wVersion ) != 2 ) 
	{	
		WSACleanup( );					/*�����ϣ��ر��׽��ֿ�*/
		return 0;						/*�������*/
	}

	/*----------------------���÷�������ַ-----------------------*/
	Server_add.sin_family=AF_INET;/*��ַ���壬���ڱ�����AF_INET��ע��ֻ�����������������ֽ�˳��*/
	/*�������ĵ�ַ����һ�����ʮ���Ʊ�ʾΪIP��ַ��inet_ntoa�ǽ���ַת���ַ���*/
	Server_add.sin_addr.S_un.S_addr = inet_addr("192.168.1.238");
	Server_add.sin_port=htons(5000);/*�˿ں�*/

	/*-----------------------�������ӷ�����----------------------*/
	/*�ͻ��˴����׽��֣����ǲ���Ҫ�󶨵ģ�ֻ��Ҫ�ͷ��������������ӾͿ����ˣ�*/
	/*socket_sendr��ʾ�����׽��֣�Server_add�������ĵ�ַ�ṹ*/
	socket_send=socket(AF_INET,SOCK_STREAM,0);
	printf("Connect Server,wait...\n");

	/*----------------------�����������ӵ��׽���--------------*/
	/*AF_INET��ʾָ����ַ�壬SOCK_STREAM��ʾ��ʽ�׽���TCP���ض��ĵ�ַ������ص�Э�顣*/
	if(connect(socket_send,(SOCKADDR*)&Server_add,sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		printf("����ʧ��!\n");
	}

	/*---------------�������ݹ���----------*/
	strcpy(Sendbuf,"Application");
	SendLen = send(socket_send,Sendbuf,100,0);		/*��������*/
	if(SendLen < 0)
	{
		printf("����ʧ��!\n");
	}
	/*--------------�������ݹ���-----------------*/
	ReceiveLen =recv(socket_send,Receivebuf,100,0);		/*��������*/
	if(ReceiveLen<0)
	{
		printf("����ʧ��\n");
		printf("�����˳�\n");
	}
	else
	{
		printf("connection Ready\n");
		printf("%s\n",Receivebuf);
	}	
	

	/*-----------------------�ͷ��׽��֣��رն�̬��----------*/
	closesocket(socket_send);				/*�ͷ��׽�����Դ*/
	WSACleanup();							/*�رն�̬���ӿ�*/
	return 0;
}
