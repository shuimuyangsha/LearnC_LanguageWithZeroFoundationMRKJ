#include<stdio.h>

int main()
{
 int num;
 int a;
 printf("2位女士合租房子: 1:实木柜 0：简易柜\n");
 scanf("%d",&num);
 if(num==1)
     printf("使用实木柜\n");
 scanf("%d",&a);
 if(a==0)
     printf("使用简易柜\n");
	 
	return 0;
}