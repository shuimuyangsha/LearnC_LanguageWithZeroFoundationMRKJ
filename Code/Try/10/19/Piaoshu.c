#include<stdio.h>
#define N 4
void max(int (*a)[N],int m)								 
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
	{
							
		for(j=0;j<N;j++)
			if(*(*(a+i)+j)==1) 					 
			sum=sum+1;
	}
	printf("剩余的票数是：%d\n",sum);
}
int main()
{
	int a[4][N],i,j;
	int (*p)[N];
	p=&a[0];
	printf("请输入电影院售票情况:\n");
	for(i=0;i<4;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 					/*给数组中的元素赋值*/
		max(p,4); 									/*调用max函数，指针变量作函数参数*/
        return 0;
}
