#include <stdio.h>
int per(int a,int b);
void main()
{
	int x,y,iResult;
	printf("������ͽ�ܱ�ʦ��������ֵ:\n");
	scanf("%d",&x);
	printf("������ͽ�������������ֵ:\n");
	scanf("%d",&y);
	iResult=per(x,y);
	printf("�������������:");
	printf("%d\n",iResult);
}

int per(int a,int b)
{
	return  (a+b);
}
