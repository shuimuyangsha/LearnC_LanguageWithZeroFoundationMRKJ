#include<stdio.h>                   /*包含头文件*/

int main()                          /*主函数main*/
{
	int a[4][2];	                /*定义数组*/
 
	int  i,j;			            /*用于控制循环*/

/*从键盘为数组元素赋值*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("输出二维数组:\n");	    /*信息提示*/
    for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
/*使元素分行显示*/
		printf("\n");
	}
	return 0;                       /*程序结束*/
}