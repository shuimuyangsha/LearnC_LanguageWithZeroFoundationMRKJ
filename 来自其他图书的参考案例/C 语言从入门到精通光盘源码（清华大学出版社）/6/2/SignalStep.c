#include<stdio.h>


int main()
{
	int iSignal;									/*定义变量表示信号灯的状态*/
	printf("the Red Light is 0,the Green Light is 1\n");	/*输出提示信息*/
	scanf("%d",&iSignal);							/*输入iSignal变量*/

	if(iSignal==1)									/*使用if语句进行判断*/
	{
		printf("the Light is green,cars can run\n");		/*判断结果为真时输出*/
	}
	if(iSignal==0)									/*使用if语句进行判断*/
	{
		printf("the Light is red,cars can't run\n");		/*判断结果为真时输出*/
	}
	return 0;
}
