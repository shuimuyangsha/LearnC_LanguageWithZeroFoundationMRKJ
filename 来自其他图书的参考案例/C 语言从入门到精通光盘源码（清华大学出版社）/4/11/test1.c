#include<stdio.h>

int main()
{
	int a;
	printf("please input:\n");
	scanf("%d",&a);									/*输入数值赋给变量a*/
	a+=a*=a/=a-6;
	printf("the result is %d\n",a); 						/*将计算结果输出*/
	return 0;
}
