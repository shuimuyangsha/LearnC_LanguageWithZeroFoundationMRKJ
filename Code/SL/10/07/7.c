#include<stdio.h>
void main()
{
	int a[3][5],i,j;
	printf("please input:\n");
	for(i=0;i<3;i++)									/*控制二维数组的行数*/
	{
		for(j=0;j<5;j++)								/*控制二维数组的列数*/
		{
			scanf("%d",a[i]+j); 						/*给二维数组元素赋初值*/
		}
	}
	printf("the array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5d",*(a[i]+j)); 					/*输出数组中元素*/
		}
		printf("\n");
	}
}
