#include<stdio.h>
int main()
{
	unsigned a,b,c;
	int n;
	printf("Please input a number:\n");
	scanf("%o",&a);
	printf("please input the number of displacement:\n");
	scanf("%d",&n);
	b=a<<16-n;
	c=a>>n;
	c=b|c;
	printf("the result is:%o\n",c);
}
