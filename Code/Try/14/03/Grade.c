#include "stdio.h"
#define iInput 15
int main()
{
 
 #if iInput>60
      printf("及格了\n");
 #endif
 #if iInput<60
      printf("不及格\n");
 #endif
 	 printf("当前分数:%d\n",iInput);
  return 0;
}



