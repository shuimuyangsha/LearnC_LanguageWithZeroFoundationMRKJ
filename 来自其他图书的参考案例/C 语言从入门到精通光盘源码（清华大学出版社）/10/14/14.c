#include<stdio.h>
main()
{
	int a[10],*p1,**p2,i,n=0;								/*�������顢ָ�롢������Ϊ��������*/
	printf("please input:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 							/*������a�и�Ԫ�ظ�ֵ*/
	p1=a;									/*������a���׵�ַ����p1*/
	p2=&p1; 										/*��ָ��p1�ĵ�ַ����p2*/
	printf("the array is:");
	for(i=0;i<10;i++)
	{
		if(*(*p2+i)%2==0)
		{
			printf("%5d",*(*p2+i));						/*��������е�Ԫ��*/
			n++;
		}
	}
	printf("\n");
	printf("the number is:%d\n",n);
}
