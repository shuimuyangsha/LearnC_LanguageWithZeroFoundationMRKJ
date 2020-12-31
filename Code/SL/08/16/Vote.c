#include <stdio.h>          /*包含头文件*/
/*声明函数*/
void CelerityRun(int left, int right, int array[]);

int main()                  /*主函数main*/
{
	int i;                  /*定义变量*/
	int a[8];
	printf("输入票数：\n");
	for(i=0;i<8;i++)        /*输入得票数据*/
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}

	/*从小到大排序*/
	CelerityRun(0,7,a);
    printf("8名票数从少到多排序如下：\n");

	/*输出数组*/
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);		/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");		    /*输出换行*/
	}
printf("\n");
	return 0;						/*程序结束*/
}

void CelerityRun(int left, int right, int array[])/*定义函数*/
{
	int i,j; /*定义变量*/
	int middle,iTemp; 
	i = left; 
	j = right; 
	middle = array[(left+right)/2];				 /*求中间值*/
	do
	{ 
		while((array[i]<middle) && (i<right))	/*从左找小于中值的数*/
			i++;      
		while((array[j]>middle) && (j>left))	/*从右找大于中值的数*/ 
			j--; 
		if(i<=j)								/*找到了一对值*/ 
		{ 
			iTemp = array[i]; /**/
			array[i] = array[j]; 
			array[j] = iTemp; 
			i++; 
			j--; 
		} 
	}while(i<=j);			                	/*如果两边的下标交错，就停止（完成一次）*/ 

	/*递归左半边*/ 
	if(left<j) 
		CelerityRun(left,j,array); 
	/*递归右半边*/ 
	if(right>i) 
		CelerityRun(i,right,array);
}
