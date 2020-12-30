#include<stdio.h>

int main()
{
	int iCount;								/*循环控制变量*/
	for(iCount=0;iCount<10;iCount++)			/*执行10次循环*/
	{
		if(iCount==5)						/*判断条件，如果iCount等于5跳出*/
		{
			printf("Continue here\n");
			continue;						/*跳出本次循环*/
		}
		printf("the counter is:%d\n",iCount);		/*输出循环的次数*/
	}
	return 0;
}
