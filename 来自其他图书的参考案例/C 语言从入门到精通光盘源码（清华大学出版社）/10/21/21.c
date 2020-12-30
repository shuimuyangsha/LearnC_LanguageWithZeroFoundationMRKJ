#include <stdio.h>
int per(int a,int b);
void main()
{
	int iWidth,iLength,iResult;
	printf("请输入长方形的长:\n");
	scanf("%d",&iLength);
	printf("请输入长方形的宽:\n");
	scanf("%d",&iWidth);
	iResult=per(iWidth,iLength);
	printf("长方形的周长是:");
	printf("%d\n",iResult);
}

int per(int a,int b)
{
	return (a+b)*2;
}
