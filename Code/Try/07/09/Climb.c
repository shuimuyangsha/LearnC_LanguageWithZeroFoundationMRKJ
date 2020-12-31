#include<stdio.h>
int main()
{
   int a;
    for(a=0;a<10;a++)
    {
	a +=2;
	if(a>=10) 
        break;
	a-= 1;
    }
    printf("%d天可以爬到井口\n",a);

      return 0;
}