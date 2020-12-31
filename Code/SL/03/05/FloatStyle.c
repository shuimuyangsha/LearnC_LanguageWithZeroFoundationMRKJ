#include<stdio.h>	                        /*包含头文件*/

int main()	                                /*主函数main*/
{
	float height=1.72f;			            /*定义单精度变量表示身高*/
    int weight=70;	                        /*定义整型变量表示体重*/
    float res=weight / (height * height);	/*将结果赋给单精度变量res*/
	printf("BMI=%f\n",res);	                /*输出变量的值*/
	return 0;					            /*程序结束*/
}