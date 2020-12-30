#include<stdio.h>

int main()
{
	int Y,X;
	int Switch;
	printf("please enter X:");
	scanf("%d",&X);
	if(X<1)
	{
		Switch=1;
	}
	else if(1<=X&&X<10)
	{
		Switch=2;
	}	
	else
	{
		Switch=3;
	}
	switch(Switch)
	{
	case 1:
	
		break;
	case 2:
		Y=2*X-1;
		break;
	case 3:
		Y=3*X-11;
		break;
	default:
		break;
	}
	printf("Y is:%d\n",Y);

	return 0;
}
