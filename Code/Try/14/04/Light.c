#include "stdio.h"
#define iInput 3
int main()
{
#if iInput==1 
    printf("���ͣ\n");
#else
   #if iInput==2
	    printf("�̵���\n", iInput);
  #else	
    printf("�ƵƵȴ�\n", iInput);
#endif
#endif
   
	return 0;
}
