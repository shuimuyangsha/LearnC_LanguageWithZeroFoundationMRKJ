#include<stdio.h>

int main()
{
	int iNumber;	/*定义变量，表示1到100间的数字*/
	int iSum=0;		/*保存计算后的结果*/
	/*使用for循环*/
	for(iNumber=1;iNumber<=100;iNumber++)
	{
		iSum=iNumber+iSum;/*累加计算*/
	}
	printf("the result is:%d\n",iSum);/*输出计算结果*/

	iSum=0;			/*恢复计算结果*/
	iNumber=1;		/*设定循环控制变量的初值*/
	while(iNumber<=100)
	{
		iSum=iSum+iNumber;	/*累加计算*/
		iNumber++;			/**/
	}
	printf("the result is:%d\n",iSum);/*输出计算结果*/
	return 0;
}

