#include<stdio.h>
int main()
{
    int loc,ser;                                         /*定义变量loc为工位号，ser为密码*/
    scanf("%d,%d",&loc,&ser);                            /*输入工位号和密码*/
    if(loc==13&&ser==111)                                /*判断输入是否相同*/
        printf("谢谢，已签到\n");           
    return 0;
}