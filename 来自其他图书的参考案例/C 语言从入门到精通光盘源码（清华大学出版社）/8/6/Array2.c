#include<stdio.h>

int main()
{
	int a[2][3],b[3][2];	/*定义两个数组*/
	int max,min;			/*表示最大值和最小值*/
	int h,l,i,j;			/*用于控制循环*/

	/*从键盘为数组元素赋值*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("输出二维数组:\n");	/*信息提示*/
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		/*使元素分行显示*/
		printf("\n");
	}
	/*求数组中最大元素及其下标*/
	max = a[0][0];
	h = 0;
	l = 0;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
				h = i;
				l = j;
			}
		}		
	}
	printf("数组中最大元素是:\n");
	printf("max:a[%d][%d]=%d\n",h,l,max);
	/*求数组中最小元素及其下标*/
	min = a[0][0];
	h = 0;
	l = 0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min > a[i][j])
			{
				min = a[i][j];
				h = i;
				l = j;
			}
		}		
	}
	printf("数组中最小元素是:\n");
	printf("min:a[%d][%d]=%d\n",h,l,min);
	/*将数组a转制后存入数组b中*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("输出转化后的二维数组:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");/*使元素分行显示*/
	}
	return 0;
}