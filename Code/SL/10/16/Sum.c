#include<stdio.h>                   /*包含头文件*/
void SUM(int *p,int n)              /*自定义函数*/ 							 
{
	int i,sum=0;                    /*定义变量*/
	for(i=0;i<n;i++)                /*循环每个数*/
			sum=sum+*(p+i);         /*相加*/
		printf("面值的总数是:%d\n",sum);/*输出*/
}
int main()                      /*主函数main*/
{
	int *pointer,a[7],i;        /*定义变量*/
	pointer=a; 									 
	printf("please input:\n");  /*提示*/
	for(i=0;i<7;i++)            /*输入一周的每天钱数*/
		scanf("%d",&a[i]);
	SUM(pointer,7);             /*调用SUM函数*/  
    return 0;                   /*程序结束*/
}
