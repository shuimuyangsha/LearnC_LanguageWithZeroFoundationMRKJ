#include<stdio.h>
int main()
{
    int iRow, iColumn; 							            /*iRowΪ�У�iColumΪ��*/
    for (iRow = 1; iRow <= 9; iRow++)			            /*forѭ��iRowΪ�˷��ھ����е�����*/
    {
        for (iColumn = 1; iColumn <= iRow; iColumn++)		/*����iRow��iColumȡֵѭ������*/
		{
            printf("%d*%d=%d ", iRow,iColumn,iRow *iColumn);/*������*/
		}
		printf("\n");
    }
	return 0;
}
