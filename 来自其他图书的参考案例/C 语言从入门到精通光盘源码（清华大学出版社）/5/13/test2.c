#include<stdio.h>

int main()
{
	float fPay=800;
	int	iAmount;
	puts("Put the product amount:");
	scanf("%d",&iAmount);
	fPay=fPay+iAmount*1.5f;
	printf("the salesman's pay is:%.2f\n",fPay);
	return 0;
}