#include "stdio.h"
#define iInput 15
int main()
{
 
 #if iInput>60
      printf("������\n");
 #endif
 #if iInput<60
      printf("������\n");
 #endif
 	 printf("��ǰ����:%d\n",iInput);
  return 0;
}



