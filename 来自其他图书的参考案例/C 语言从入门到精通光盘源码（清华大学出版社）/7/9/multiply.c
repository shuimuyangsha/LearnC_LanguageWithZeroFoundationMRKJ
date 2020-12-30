#include<stdio.h>
int main()
{
    int iRow, iColumn; 							/*iRow为行，iColum为列*/
    for (iRow = 1; iRow <= 9; iRow++)			/*for循环iRow为乘法口诀表中的行数*/
    {
        for (iColumn = 1; iColumn <= iRow; iColumn++)		/*根据iRow，iColum取值循环计算*/
		{
            printf("%d*%d=%d ", iRow,iColumn,iRow *iColumn);	/*输出结果*/
		}
		printf("\n");
    }
	return 0;
}
