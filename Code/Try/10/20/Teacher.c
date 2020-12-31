#include <stdio.h>
int per(int a,int b);
void main()
{
	int x,y,iResult;
	printf("请输入徒弟比师傅少做数值:\n");
	scanf("%d",&x);
	printf("请输入徒弟做了零件的数值:\n");
	scanf("%d",&y);
	iResult=per(x,y);
	printf("这批零件总数是:");
	printf("%d\n",iResult);
}

int per(int a,int b)
{
	return  (a+b);
}
