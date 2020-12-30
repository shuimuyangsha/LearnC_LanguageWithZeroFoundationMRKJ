#include<stdio.h>

void  Evaluate(int iArrayName[10]);		/*声明赋值函数*/
void  Display(int iArrayName[10]);		/*声明显示函数*/

int main()
{
	int iArray[10];		/*定义一个具有10个元素的整型数组*/

	Evaluate(iArray);	/*调用函数进行赋值操作，将数组名作为参数*/
	Display(iArray);	/*调用函数进行赋值操作，将数组名作为参数*/
	return 0;
}
/*///////////////////////////////////////////////////////////*/
/*						数组元素的显示						*/
/*///////////////////////////////////////////////////////////*/
void  Display(int iArrayName[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("the member number is %d\n",iArrayName[i]);
	}
}
/*///////////////////////////////////////////////////////////*/
/*						进行数组元素的赋值					*/
/*///////////////////////////////////////////////////////////*/
void  Evaluate(int iArrayName[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		iArrayName[i]=i;
	}
}