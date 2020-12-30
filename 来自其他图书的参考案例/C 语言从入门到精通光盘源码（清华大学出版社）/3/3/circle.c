#include<stdio.h>
#define PAI 3.14				/*定义符号常量*/

int main()
{
	double fRadius;				/*定义半径变量*/
	double fResult=0;			/*定义结果变量*/
	printf("请输入圆的半径:");	/*提示*/

	scanf("%lf",&fRadius);		/*输入数据*/

	fResult=fRadius*fRadius*PAI;	/*进行计算*/
	printf("圆的面积为：%lf\n",fResult);/*显示结果*/
	return 0;					/*程序结束*/
}