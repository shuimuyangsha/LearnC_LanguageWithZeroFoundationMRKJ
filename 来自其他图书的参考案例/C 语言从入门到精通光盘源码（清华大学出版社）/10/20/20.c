#include<stdio.h>
#define N 4
void max(int (*a)[N],int m)								/*自定义min函数，求二维数组中每行最小元素*/
{
	int value,i,j,sum=0;
	for(i=0;i<m;i++)
	{
		value=*(*(a+i)); 							/*将每行中的首个元素赋给value*/
		for(j=0;j<N;j++)
			if(*(*(a+i)+j)>value) 						/*判断其他元素是否小于value的值*/
				value=*(*(a+i)+j);					/*把比value大的数重新赋给value*/
			printf("第%d行:最大数是：%d\n",i,value);
			sum=sum+value;
	}
	printf("\n");
	printf("每行中最大数相加之和是：%d\n",sum);
}
main()
{
	int a[3][N],i,j;
	int (*p)[N];
	p=&a[0];
	printf("please input:\n");
	for(i=0;i<3;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 					/*给数组中的元素赋值*/
		max(p,3); 									/*调用min函数，指针变量作函数参数*/
}
