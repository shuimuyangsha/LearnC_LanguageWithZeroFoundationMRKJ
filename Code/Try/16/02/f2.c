#include "stdio.h"
#include <stdlib.h>
int main()
{
  int len = 0;
  char * buf = 0;
  int i;

  while(1) {
    char c;
   scanf("%c",&c);
    if(c == 'q'){
      for(i=0; i<len; ++i) {
        printf("%c\n",buf[i]);
        
      }
      break;
    }
    else {
      char *tmp ;
      tmp=(char*)malloc(sizeof(char));
      // ����ԭ�����ַ�����
      for(i=0; i<len; ++i) {
        tmp[i] = buf[i];
      }
      // ��������ַ�
      tmp[len] = c;
      // ָ���������
      buf = tmp;
      // ������1
      len ++;
    }
  }
  return 0;
}
