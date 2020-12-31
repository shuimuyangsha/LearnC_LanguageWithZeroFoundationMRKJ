#include <stdio.h>
#include <string.h>
/*
  获取本地主机的主机名。
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
  WSAStartup(0x0101, &w);//这一行必须在使用任何SOCKET函数前写！
  gethostname(szHostname, 256);
  strcpy(strHostname,szHostname);//此处获得本机名称
  printf("%s",strHostname);
  WSACleanup();
  printf("\n");
  return 0;
}

