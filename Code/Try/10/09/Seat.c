#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	printf("please input:\n");
	for(i=0;i<5;i++)								/*���ƶ�ά����ĵ�3������*/
		for(j=0;j<5;j++)							/*���ƶ�ά���������*/
			scanf("%d",*(a+i)+j);					/*Ϊ��ά�����е�Ԫ�ظ�ֵ*/								/*pΪ��һ��Ԫ�صĵ�ַ*/
		printf("the eight line is:\n");
		for(j=0;j<5;j++)
				printf("%5d",*(*(a+1)+j));				/*�����ά�����е�Ԫ��*/
			printf("\n");
            return 0;
}
