#include<stdio.h>/*包含头文件*/
int main()/*主函数main*/
{
    int a;/*定义整型数据*/
    int *ipointer1;				/*声明指针变量*/
    printf("请输入数据：\n");/*输出提示*/
    scanf("%d",&a);				/*输入数*/
    ipointer1 = &a;/*将地址赋给指针变量*/					
    printf("转化十六进制为：%x\n",*ipointer1);/*以16进制输出*/
    return 0;/*程序结束*/
}
