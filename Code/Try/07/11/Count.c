#include<stdio.h>
int main()
{
    int minute=2;
    int second;
    start : second = 59;
    while(minute>=0)
    {
        printf("%d:%d\n",minute,second);
	    second-=1;
        if(second<0)
        {
        minute-=1;
        goto start;
        }
    } 
        
      return 0;
}