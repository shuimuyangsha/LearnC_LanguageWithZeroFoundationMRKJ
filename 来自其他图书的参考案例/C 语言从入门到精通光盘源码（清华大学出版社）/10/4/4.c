#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("please input the number:\n");
	scanf("%ld",&i);
	p=&i;
	printf("the result1 is: %ld\n",*&i); 				/*�������i��ֵ*/
	printf("the result2 is: %ld\n",i);					/*�������i��ֵ*/
	printf("the result3 is: %ld\n",*p); 				/*ʹ��ָ����ʽ���I��ֵ*/
}
