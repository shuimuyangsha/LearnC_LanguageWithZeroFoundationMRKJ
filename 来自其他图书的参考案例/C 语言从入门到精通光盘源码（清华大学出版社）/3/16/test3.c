#include<stdio.h>

void Caculate()
{
	static int iSum=3;
	int iTemp;
	iTemp=iSum;				//iSum是静态变量
	iSum=iTemp*3;
	printf("%d\n",iSum);
}
int main()
{
	Caculate();	//得到iSum的平方
	Caculate();	//得到iSum的立方
	return 0;
}

