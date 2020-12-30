#include<stdio.h>

int main()
{
	int index;
	int iArray[]={1,2,3,4,5};			/*不指定元素个数进行初始化*/
	for(index=0;index<5;index++)
	{
		printf("%d\n",iArray[index]);			/*使用for循环隔位输出数组中的元素*/
	}
	return 0;
}