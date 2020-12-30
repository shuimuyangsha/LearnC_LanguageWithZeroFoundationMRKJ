#include<stdio.h>

int main()
{
      int num;
	  printf("输出0~100之间不能被3整除的数：\n");
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
 