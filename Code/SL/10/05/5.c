#include<stdio.h>
void main()
{
	int i;
	int *p;
	printf("please input the number:\n");
	scanf("%d",&i);
	p=&i; 									/*������i�ĵ�ַ����ָ�����*/
	printf("the result1 is: %d\n",p);
	p++;										/*��ַ��1�������1��������һ���ֽ�*/
	printf("the result2 is: %d\n",p);
}
