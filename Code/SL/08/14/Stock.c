#include <stdio.h>/*包含头文件*/
int main()/*主函数main*/
{
	int i,j;/*定义变量*/
	int a[10];
	int iTemp; 
	printf("10家公司股票数据如下：\n");
	/*输入10家数据*/
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}
	/*从大到小排序*/
	for(i=0;i<9;i++) 				/*外层循环元素下标为0~8*/
	{ 
		for(j=i+1;j<10;j++) 			/*内层循环元素下标为i+1到9*/
		{ 
			if(a[j] > a[i]) 			/*如果当前值比其他值大*/
			{ 
				/*交换两个数值*/
				iTemp = a[i]; 
				a[i]  = a[j]; 
				a[j]  = iTemp; 
			} 
		} 
	}

	/*输出数组*/
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);			/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");		    /*输出换行*/
	}

	return 0;						/*程序结束*/
}
