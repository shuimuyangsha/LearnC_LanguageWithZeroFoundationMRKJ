#include<stdio.h>

int main()
{
	int iNumber=1;	/*定义变量，为变量赋初始值*/
	int iSum=0;		/*保存计算后的结果*/
	/*使用for循环*/
	for(;iNumber<=100;iNumber++)
	{
		iSum=iNumber+iSum;/*累加计算*/
	}
	printf("the result is:%d\n",iSum);/*输出计算结果*/

	return 0;
}
