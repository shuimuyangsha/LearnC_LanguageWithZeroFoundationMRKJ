#include<stdio.h>
void SUM(int *p,int n) 								/*�Զ��庯��odd���������е�����*/
{
	int i,sum=0;
	printf("the odd:\n");
	for(i=0;i<n;i++)
		if(*(p+i)%2!=0) 								/*�ж������е�Ԫ���Ƿ�Ϊ����*/
		{
			printf("%5d",*(p+i));
			sum=sum+*(p+i);
		}
		printf("\n");
		printf("sum:%d\n",sum);
}
main()
{
	int *pointer,a[10],i;
	pointer=a; 										/*ָ��ָ�������׵�ַ*/
	printf("please input:\n");	
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	SUM(pointer,10); 									/*����odd����*/
}
