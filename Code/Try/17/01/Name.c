#include <stdio.h>
#include <string.h>
/*
  ��ȡ������������������
*/

#include <windows.h>
#include <winsock.h>
#include <string.h>
#pragma comment(lib,"wsock32.lib")
int main(int argc, char* argv[])
{
  char szHostname[256]="";
   char strHostname[256];
  struct hostent *pHostent = 0;
  WSADATA w;
  WSAStartup(0x0101, &w);//��һ�б�����ʹ���κ�SOCKET����ǰд��
  gethostname(szHostname, 256);
  strcpy(strHostname,szHostname);//�˴���ñ�������
  printf("%s",strHostname);
  WSACleanup();
  printf("\n");
  return 0;
}

