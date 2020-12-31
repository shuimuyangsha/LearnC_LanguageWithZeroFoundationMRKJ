#include<stdio.h>

int main()
{
	int a[3][3];	/*定义数组*/
 
	int  i,j;			/*用于控制循环*/

	/*从键盘为数组元素赋值*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("输出二维数组:\n");	/*信息提示*/
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		/*使元素分行显示*/
		printf("\n");
	}
	return 0;
}