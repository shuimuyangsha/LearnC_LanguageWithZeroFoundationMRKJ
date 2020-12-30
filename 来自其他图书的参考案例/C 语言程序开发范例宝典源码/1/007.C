#include<stdio.h>
main()
{
    int x;
    printf("please input a number:\n");
    scanf("%d", &x); 										/*从键盘中输入一个数*/
    if (x % 5 == 0 && x % 7 == 0)							/*判断该数是否能同时被5和7整除*/
        printf("yes");										/*如果能，则输出yes*/
    else
        printf("no");										/*如果不能，则输出no*/
}
