#include<stdio.h>
main()
{
	long i;
	long *p;
	printf("please input the number:\n");
	scanf("%ld",&i);
	p=&i;
	printf("the result1 is: %ld\n",*&i); 				/*输出变量i的值*/
	printf("the result2 is: %ld\n",i);					/*输入变量i的值*/
	printf("the result3 is: %ld\n",*p); 				/*使用指针形式输出I的值*/
}
