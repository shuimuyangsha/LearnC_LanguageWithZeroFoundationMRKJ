#include<stdio.h>
int main()
{
    char *name="123123",*phone="123123",*email="121323";
    printf("the 1 is true,0 is false\n");   //提示信息
    printf("用户是否可以登录：%d\n",(name=="丫蛋" || phone=="13578982158" || email==" mingrisoft@mingrisoft.com "));   //逻辑或显示结果
    return 0;
}