#include<stdio.h>
void main()
{
    unsigned result; 									/*定义无符号数*/
    int a, b;
    printf("please input a:");
    scanf("%d",&a);
    printf("please input b:");
    scanf("%d",&b);
    printf("a=%d,b=%d", a, b);
    result = a^b; 									/*求a与b异或的结果*/
    printf("\na^b=%u\n", result);
}
