#include <stdio.h>
int per(int a,int b);
void main()
{
	int iWidth,iLength,iResult;
	printf("�����볤���εĳ�:\n");
	scanf("%d",&iLength);
	printf("�����볤���εĿ�:\n");
	scanf("%d",&iWidth);
	iResult=per(iWidth,iLength);
	printf("�����ε��ܳ���:");
	printf("%d\n",iResult);
}

int per(int a,int b)
{
	return (a+b)*2;
}
