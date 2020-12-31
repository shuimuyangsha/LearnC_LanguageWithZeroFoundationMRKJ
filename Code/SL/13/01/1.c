#include<stdio.h>
void main()
{
    unsigned result; 									/*定义无符号变量*/
    int age1, age2;
    printf("please input age1:");
    scanf("%d",&age1);
    printf("please input age2:");
    scanf("%d",&age2);
    printf("age1=%d,age2=%d", age1, age2);
    result = age1&age2; 										/*计算与运算的结果*/
    printf("\nage1&age2=%u\n", result);
}
