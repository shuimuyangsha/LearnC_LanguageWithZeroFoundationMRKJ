#include<stdio.h>
void main()
{
    unsigned result; 									/*定义无符号变量*/
    int a;
    printf("please input a:");
    scanf("%d",&a);
    printf("a=%d", a);
    result = ~a; 									/*求a的反*/
    printf("\n~a=%o\n", result);
}
