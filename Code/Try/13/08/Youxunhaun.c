#include <stdio.h>
right(unsigned value, int n)									/*自定义右移函数*/
{
    unsigned z;
    z = (value << (32-n)) | (value >> n);						/*循环右移的实现过程*/
    return z;
} 
int main()
{
    unsigned a;
    int n;
    printf("输入自己身高:\n");
    scanf("%d", &a);										/*输入一个八进制数*/
    printf("输入要移位的位数:\n");
    scanf("%d", &n);									/*输入要移位的位数*/
    printf("the result is %o\n", right(a, n));					/*将右移后的结果输出*/
    return 0;
}
