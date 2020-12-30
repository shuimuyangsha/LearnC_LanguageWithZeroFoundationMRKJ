#include<stdio.h>

int main()
{
	int index;					/*定义循环控制变量*/
    int	iArray[6]={0,1,2,3,4,5};		/*対数组中的元素赋值*/

	for(index=0;index<6;index+=2)		/*输出数组中的元素*/
	{
		printf("%d\n",iArray[index]);
	}
	
	return 0;
}