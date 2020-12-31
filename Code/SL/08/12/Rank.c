#include <stdio.h>                  /*包含头文件*/
int main()                          /*主函数main*/
{
	int i,j;                        /*定义变量*/
	int a[10];
	int iTemp; 
	int iPos; 
	printf("为数组元素赋值：\n");
	/*从键盘为数组元素赋值（成绩）*/
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}
	/*从高到低排序*/
	for(i=0;i<9;i++) 				/*设置外层循环为下标0~8的元素*/
	{ 
		iTemp = a[i]; 				/*设置当前元素为最大值*/
		iPos = i;					/*记录元素位置*/
		for(j=i+1;j<10;j++) 		/*内层循环i+1到9*/
		{ 
			if(a[j]>iTemp) 			/*如果当前元素比最高值还高*/
			{ 
				iTemp = a[j];	 	/*重新设置最高值*/
				iPos = j; 			/*记录元素位置*/
			} 
		} 
		/*交换两个元素值*/
		a[iPos] = a[i]; 
		a[i] = iTemp; 
	}

	/*输出数组*/
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);		/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");		    /*输出换行*/
	}

	return 0;						/*程序结束*/
}
