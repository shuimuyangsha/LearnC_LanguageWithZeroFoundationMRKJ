#include<stdio.h>
int main()
{
	int a=600/(0.75-0.25-0.2);
    int *p;
	p=&a;
	printf("%d\n",&*p); 					/*��������������ĵ�ַ*/
    return 0;
}
	 
