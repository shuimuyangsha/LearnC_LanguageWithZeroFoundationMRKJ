#include<stdio.h>
main()
{
int a,b,res1,res2;
printf("please input a and b:\n");
scanf("%d%d",&a,&b);
res1=a&b;
res2=a|b;
printf("%d&%d=%d\n",a,b,res1);
printf("%d|%d=%d\n",a,b,res2);
}