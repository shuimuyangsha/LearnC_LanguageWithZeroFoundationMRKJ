#include<stdio.h>

int main()
{
      int num;
	  printf("���0~100֮�䲻�ܱ�3����������\n");
      for(num=1;num<=100;num++)
      {
            if(num%3 == 0)
            {
                  continue;
            }
            else
            {
				printf("%d\t",num);
            }
      }
	  printf("\n");
      return 0;
}
 