#include<stdio.h>

int main()
{
	/*iNumber1的作用域在整个main函数中*/
	int iNumber1=1;
	if(iNumber1>0)
	{
		/*iNumber2的作用域在if语句块中*/
		int iNumber2=2;
		if(iNumber2>0)
		{
			/*iNumber3的作用域在if语句块中*/
			int iNumber3=3;

			printf("All three number are in scope here %d  %d  %d\n",
				iNumber1,iNumber2,iNumber3);/*将3个都在此作用域的函数进行输出*/
		}
	}
	return 0;
}