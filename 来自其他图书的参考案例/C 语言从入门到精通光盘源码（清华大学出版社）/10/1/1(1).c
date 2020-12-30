#include<stdio.h>
main()
{
    int a, b;
    int *ipointer1,*ipointer2;				/*声明两个指针变量*/
    scanf("%d,%d",&a,&b);				/*输入两个数*/
    ipointer1 = &a;
    ipointer2 = &b; 						/*将地址赋给指针变量*/
    printf("The number is:%d,%d\n",*ipointer1,*ipointer2);
}
