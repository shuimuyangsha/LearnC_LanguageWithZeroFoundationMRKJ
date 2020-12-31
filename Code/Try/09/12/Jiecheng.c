#include<stdio.h>
int  square(int x)
{
    int y;
    y=x*x;
    return y; 
}

int faction(int n)
{
    int temp=1,j;
     for(j=1;j<=square(n);j++)
     {
        temp=temp*j;
     }
      return temp; 
}

int main()
{
    long sum=0;
    int i;
    for(i=1;i<4;i++)
    sum=sum+faction(i);
    printf("计算的结果是：%ld\n",sum);
    return 0;
}