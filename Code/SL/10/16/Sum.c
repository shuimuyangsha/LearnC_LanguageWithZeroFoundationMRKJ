#include<stdio.h>                   /*����ͷ�ļ�*/
void SUM(int *p,int n)              /*�Զ��庯��*/ 							 
{
	int i,sum=0;                    /*�������*/
	for(i=0;i<n;i++)                /*ѭ��ÿ����*/
			sum=sum+*(p+i);         /*���*/
		printf("��ֵ��������:%d\n",sum);/*���*/
}
int main()                      /*������main*/
{
	int *pointer,a[7],i;        /*�������*/
	pointer=a; 									 
	printf("please input:\n");  /*��ʾ*/
	for(i=0;i<7;i++)            /*����һ�ܵ�ÿ��Ǯ��*/
		scanf("%d",&a[i]);
	SUM(pointer,7);             /*����SUM����*/  
    return 0;                   /*�������*/
}
