#include<stdio.h>
void main()
{
	int *p,*q,a[5],b[5],i;
	p=&a[0];
	q=b;
	printf("please input array a:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);						/*Ϊ����a�е�Ԫ�ظ���ֵ*/
	printf("please input array b:\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]); 						/*Ϊ����b�е�Ԫ�ظ���ֵ*/
	printf("array a is:\n");
	for(i=0;i<5;i++)
		printf("%5d",*(p+i)); 						/*�������a�е�Ԫ��*/
	printf("\n");
	printf("array b is:\n");
	for(i=0;i<5;i++)
		printf("%5d",*(q+i)); 						/*�������b�е�Ԫ��*/
	printf("\n");
}
