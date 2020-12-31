#include<stdio.h>						/*包含头文件*/
#define HEG 0.54						/*定义常量*/

float height(float father, float mother);		/*函数声明*/

int main()								/*主函数main*/
{
	float father;							/*定义浮点型变量，表示父亲身高*/
	float mother;						/*定义浮点型变量，表示母亲身高*/
	float son;							/*定义浮点型变量，表示儿子身高*/
	
	printf("请输入父亲的身高：\n");				/*显示提示*/
	scanf("%f",&father);				/*输入父亲身高*/

	printf("请输入母亲身高：\n");				/*显示提示*/
	scanf("%f",&mother);				/*输入母亲身高*/

	son=height(father,mother);	/*调用函数，计算儿子身高*/
	printf("预测儿子身高：");			/*显示提示*/
	printf("%.2f\n",son);				/*输出儿子身高*/
	return 0;							/*返回整型0*/
}

float height(float father, float mother)		/*定义计算儿子身高函数*/
{
	float son =(father+mother)*HEG;		/*具体计算儿子身高*/
	return son;						/*将计算儿子身高结果返回*/
}
