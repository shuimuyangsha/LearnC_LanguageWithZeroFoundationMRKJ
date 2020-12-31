#include<stdio.h>
int main()
{
	int a=600/(0.75-0.25-0.2);
    int *p;
	p=&a;
	printf("%d\n",&*p); 					/*输出公里数变量的地址*/
    return 0;
}
	 
