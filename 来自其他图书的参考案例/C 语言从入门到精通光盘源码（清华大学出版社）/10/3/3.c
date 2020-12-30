#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("please input the number:\n");
	scanf("%ld",&i);
	p=&i;
	printf("the result1 is: %ld\n",&*p); 					/*输出变量i的地址*/
	printf("the result2 is: %ld\n",&i); 					/*输出变量I的地址*/
}
