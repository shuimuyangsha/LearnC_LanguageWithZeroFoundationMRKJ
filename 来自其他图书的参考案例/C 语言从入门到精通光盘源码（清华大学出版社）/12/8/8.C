#include <stdio.h>
right(unsigned value, int n)									/*自定义右移函数*/
{
    unsigned z;
    z = (value << (32-n)) | (value >> n);						/*循环右移的实现过程*/
    return z;
} 
main()
{
    unsigned a;
    int n;
    printf("please input a number:\n");
    scanf("%o", &a);										/*输入一个八进制数*/
    printf("please input the number of displacement（>0）:\n");
    scanf("%d", &n);									/*输入要移位的位数*/
    printf("the result is %o:\n", right(a, n));					/*将右移后的结果输出*/
}
