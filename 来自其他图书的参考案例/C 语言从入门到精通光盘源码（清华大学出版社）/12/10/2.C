#include<stdio.h>
main()
{
int a,left,right;
printf("please input a:\n");
scanf("%d",&a);
left=a<<2;
right=a>>2;
printf("the result is :\nleft:%d\nright:%d\n",left,right);
}