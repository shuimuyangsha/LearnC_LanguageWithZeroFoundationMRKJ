#include<stdio.h>
#include<winsock.h>							/*����winsockͷ�ļ�*/

int  main()
{
	/*------------------------------------------------------------------*/
	/*----------------------�������--------------------------------*/
	/*------------------------------------------------------------------*/
	char Receivebuf[100];					/*�������ݵĻ�����*/
	int length;

	SOCKET socket_send;					/*�����׽���*/
	SOCKADDR_IN Server_add;				/*��������ַ��Ϣ�ṹ*/
	SOCKADDR_IN Client_add;				/*�ͻ��˵�ַ��Ϣ�ṹ*/

	WORD wVersionRequested;				/*�֣�word����unsigned short*/
	WSADATA wsaData;					/*��汾��Ϣ�ṹ*/
	int error;							/*��ʾ����*/

	/*------------------------------------------------------------------*/
	/*-------------------------��ʼ���׽��ֿ�---------------------------*/
	/*------------------------------------------------------------------*/
				/*����汾���͡��������ֽ���ϳ�һ���֣�ǰ���ǵ��ֽڣ������Ǹ��ֽ�*/
	wVersionRequested = MAKEWORD( 2, 2 );	
				/*�����׽��ֿ⣬��ʼ��Ws2_32.dll��̬���ӿ�*/
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
		return 0;							/*�������*/
	}

	/*�����׽���*/
	socket_send=socket(AF_INET,SOCK_DGRAM,0);

	/*----------------------���÷�������ַ-----------------------*/
	Server_add.sin_family=AF_INET;/*��ַ���壬���ڱ�����AF_INET��ע��ֻ�����������������ֽ�˳��*/
	Server_add.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	Server_add.sin_port=htons(5000);/*�˿ں�*/

	/*���׽���*/
	bind(socket_send,(SOCKADDR*)&Server_add,sizeof(SOCKADDR));
	
	length=sizeof(SOCKADDR);

	recvfrom(socket_send,Receivebuf,100,0,(SOCKADDR*)&Client_add,&length);
	
	printf("%s\n",Receivebuf);

	/*------------------------------------------------------------------*/
	/*-----------------------�ͷ��׽��֣��رն�̬��----------*/
	/*------------------------------------------------------------------*/
	closesocket(socket_send);				/*�ͷ��׽�����Դ*/
	WSACleanup();							/*�رն�̬���ӿ�*/
	return 0;
}
