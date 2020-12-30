#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* pArray;		/*定义指针*/
	int i;				/*循环控制变量*/
	pArray=(int*)calloc(3,sizeof(int));	/*数组内存*/

	for(i=1;i<4;i++)	/*使用循环对数组进行赋值*/
	{
		*pArray=10*i;	/*赋值*/
		printf("NO%d is: %d\n",i,*pArray);	/*显示结果*/
		pArray+=1;		/*移动指针到数组到下一个元素*/
	}
	return 0;
}