
#include<stdio.h>

int main()
{
	int iSum=0;			/*定义变量，表示计算总和*/
	int iNumber=1;		/*表示每一个数字*/

	while(iNumber<=100)	/*使用while循环*/
	{
		iSum=iSum+iNumber;	/*进行累加*/
		iNumber++;			/*增加数字*/
	}
	printf("the result is：%d\n",iSum);	/*将结果输出*/
	return 0;
}
