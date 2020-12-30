#include<stdio.h>

int main()
{
	int iNumber=1;	/*定义变量，表示数字*/
	int iSum=0;		/*表示计算的总和*/

	do
	{
		iSum=iSum+iNumber;	/*计算累加的总和*/
		iNumber++;			/*进行自身加1*/
	}
	while(iNumber<=100);	/*检验条件*/

	printf("the result is: %d\n",iSum);		/*输出计算结果*/
	return 0;
}