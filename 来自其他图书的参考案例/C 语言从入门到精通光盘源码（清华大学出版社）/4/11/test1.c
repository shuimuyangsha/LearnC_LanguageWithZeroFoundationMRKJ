#include<stdio.h>

int main()
{
	int a;
	printf("please input:\n");
	scanf("%d",&a);									/*������ֵ��������a*/
	a+=a*=a/=a-6;
	printf("the result is %d\n",a); 						/*�����������*/
	return 0;
}
