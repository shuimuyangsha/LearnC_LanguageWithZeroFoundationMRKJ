#include <stdio.h>
int main()
{
	int i,j;
    int a[5]={3,8,5,3,2};
	int iTemp; 
	int iPos; 
	 
	/*从高到低排序*/
	for(i=0;i<5;i++) 				/*设置外层循环为下标0~8的元素*/
	{ 
		iTemp = a[i]; 				/*设置当前元素为最大值*/
		iPos = i;					/*记录元素位置*/
		for(j=i+1;j<5;j++) 		 
		{ 
			if(a[j]>iTemp) 			/*如果当前元素比最大值还大*/
			{ 
				iTemp = a[j];	 	/*重新设置最大值*/
				iPos = j; 			/*记录元素位置*/
			} 
		} 
		/*交换两个元素值*/
		a[iPos] = a[i]; 
		a[i] = iTemp; 
	}
    printf("这箱苹果按照重量从大到小排列为：\n");

	/*输出数组*/
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);		/*输出制表位*/
	}
    printf("\n");

	return 0;						/*程序结束*/
}
