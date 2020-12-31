#include <stdio.h>
int main()
{
    int i;
    printf("输入手里的钱数: \n");
    scanf("%d",&i);
    if(i>=2)
        printf("你可以买可乐\n");
    if(i<2)
        printf("你可以买矿泉水\n");
    return 0;
}