#include<stdio.h>
#define N 4
void max(int (*a)[N],int m)								/*�Զ���min���������ά������ÿ����СԪ��*/
{
	int value,i,j,sum=0;
	for(i=0;i<m;i++)
	{
		value=*(*(a+i)); 							/*��ÿ���е��׸�Ԫ�ظ���value*/
		for(j=0;j<N;j++)
			if(*(*(a+i)+j)>value) 						/*�ж�����Ԫ���Ƿ�С��value��ֵ*/
				value=*(*(a+i)+j);					/*�ѱ�value��������¸���value*/
			printf("��%d��:������ǣ�%d\n",i,value);
			sum=sum+value;
	}
	printf("\n");
	printf("ÿ������������֮���ǣ�%d\n",sum);
}
void main()
{
	int a[3][N],i,j;
	int (*p)[N];
	p=&a[0];
	printf("please input:\n");
	for(i=0;i<3;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]); 					/*�������е�Ԫ�ظ�ֵ*/
		max(p,3); 									/*����min������ָ���������������*/
}
