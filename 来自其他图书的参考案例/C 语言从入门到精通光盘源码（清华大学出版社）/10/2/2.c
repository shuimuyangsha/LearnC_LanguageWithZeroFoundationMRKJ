#include<stdio.h>
main( )
{
     int *p,q;
     printf("please input:\n");
     scanf("%d",&q);									/*����һ����������*/
     p = &q;
     printf("the number is:\n");
     printf("%d\n",*p);									/*���������ֵ*/
}
