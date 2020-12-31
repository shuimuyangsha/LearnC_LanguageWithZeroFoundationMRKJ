#include<stdio.h>
#define N 3
void fun(int a[N][N],int n)
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<=i;j++)
            a[i][j]*=n;

}
int main()
{
    int a[N][N],i,j;
    for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
    fun(a,3);
    printf("左下半边角元素中的值乘以n的结果是：\n");
    for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
