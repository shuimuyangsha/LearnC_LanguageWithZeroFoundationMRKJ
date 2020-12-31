#include<stdio.h>
int main()
{
    int a=10;
    int *ipointer1;				/*声明两个指针变量*/
    ipointer1 = &a;				
    printf("答案是%d\n",*ipointer1);
    return 0;
}
