#include<stdio.h>
void main()
{
	int a[3][5],i,j;
	printf("please input:\n");
	for(i=0;i<3;i++)									/*���ƶ�ά���������*/
	{
		for(j=0;j<5;j++)								/*���ƶ�ά���������*/
		{
			scanf("%d",a[i]+j); 						/*����ά����Ԫ�ظ���ֵ*/
		}
	}
	printf("the array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5d",*(a[i]+j)); 					/*���������Ԫ��*/
		}
		printf("\n");
	}
}
