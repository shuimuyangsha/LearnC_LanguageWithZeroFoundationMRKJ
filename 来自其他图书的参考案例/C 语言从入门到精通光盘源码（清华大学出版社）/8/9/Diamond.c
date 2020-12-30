#include<stdio.h>

int main()
{
	int iRow,iColumn;		/*用来控制循环的变量*/
	char cDiamond[][5]={{' ',' ','*'},			/*初始化二维字符数组*/
						{' ','*',' ','*'},
						{'*',' ',' ',' ','*'},
						{' ','*',' ','*'},
						{' ',' ','*'} };
	for(iRow=0;iRow<5;iRow++)		/*利用循环进行输出数组*/
	{
		for(iColumn=0;iColumn<5;iColumn++)
		{
			printf("%c",cDiamond[iRow][iColumn]);	/*输出数组元素*/
		}
		printf("\n");		/*进行换行*/
	}
	return 0;
}