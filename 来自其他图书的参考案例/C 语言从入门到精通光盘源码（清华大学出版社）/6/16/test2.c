#include<stdio.h>

int main()
{
	int a,b,c;
	printf("please enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("the max is a: %d\n",a);
		}
		else
		{
			printf("the max is c: %d\n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("the max is b: %d\n",b);
		}
		else
		{
			printf("the max is c: %d\n",c);
		}
	}
	return 0;
}