#include<stdio.h>
main( )
{
     int *p,q;
     printf("please input:\n");
     scanf("%d",&q);									/*输入一个整型数据*/
     p = &q;
     printf("the number is:\n");
     printf("%d\n",*p);									/*输出变量的值*/
}
