#include<stdio.h>

int main()
{
	int iSignal;									/*定义变量表示信号灯的状态*/
	printf("the Red Light is 0,\nthe Green Light is 1,\nthe Yellow Light is other number\n");	/*输出提示信息*/
	scanf("%d",&iSignal);							/*输入iSignal变量*/

	if(iSignal==1)		/*当信号灯为绿色时*/
	{
		printf("the Light is green,cars can run\n");		/*判断结果为真时输出*/
	}
	if(iSignal==0)		/*当信号灯为红灯时*/
	{
		printf("the Light is red,cars can't run\n");		/*判断结果为真时输出*/
	}
	else				/*当信号灯为黄灯时*/
	{
		printf("the Light is yellow,cars are ready\n");
	}
	return 0;
}
