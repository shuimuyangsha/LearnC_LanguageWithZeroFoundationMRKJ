#include<stdio.h>
int main()
{
	int i,j;
	int a[12];
	int iTemp; 
	printf("输入成绩：\n");
 
	for(i=0;i<12;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}
	/*从高到低排序*/
	for(i=0;i<12;i++) 				/*外层循环元素下标*/
	{ 
		for(j=12;j>=i;j--) 			/*内层循环元素下标*/
		{ 
			if(a[j]>a[j-1]) 		/*如过前一个数比后一个数小*/
			{ 
				/*交换两个数组元素的值*/
				iTemp  = a[j-1]; 
				a[j-1] = a[j]; 
				a[j]   = iTemp; 
			} 
		} 
	}

	/*输出数组*/
	for(i=0;i<12;i++)
	{
		printf("%d\t",a[i]);			/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");			/*输出换行*/
	}

	return 0;						/*程序结束*/
}
	
