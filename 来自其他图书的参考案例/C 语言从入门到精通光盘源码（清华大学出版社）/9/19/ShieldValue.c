#include<stdio.h>

int main()			/*主函数main中*/
{
	int iNumber1=1;			/*在第一个iNUmber1定义位置*/
	printf("%d\n",iNumber1);		/*输出变量值*/

	if(iNumber1>0)
	{
		int iNumber1=2;		/*在第二个iNUmber1定义位置*/
		printf("%d\n",iNumber1);	/*输出变量值*/

		if(iNumber1>0)
		{
			int iNumber1=3;	/*在第三个iNUmber1定义位置*/
			printf("%d\n",iNumber1);/*输出变量值*/
		}

		printf("%d\n",iNumber1);	/*输出变量值*/
	}

	printf("%d\n",iNumber1);		/*输出变量值*/
	return 0;
}