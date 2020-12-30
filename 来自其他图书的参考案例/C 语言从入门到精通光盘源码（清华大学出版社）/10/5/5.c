#include<stdio.h>
main()
{
	int i;
	int *p;
	printf("please input the number:\n");
	scanf("%d",&i);
	p=&i; 									/*将变量i的地址赋给指针变量*/
	printf("the result1 is: %d\n",p);
	p++;										/*地址加1，这里的1并不代表一个字节*/
	printf("the result2 is: %d\n",p);
}
