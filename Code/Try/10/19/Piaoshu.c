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
	printf("ʣ���Ʊ���ǣ�%d\n",sum);
}
int main()
{
	int a[4][N],i,j;
	int (*p)[N];
	p=&a[0];
	printf("�������ӰԺ��Ʊ���:\n");
	for(i=0;i<4;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 					/*�������е�Ԫ�ظ�ֵ*/
		max(p,4); 									/*����max������ָ���������������*/
        return 0;
}
