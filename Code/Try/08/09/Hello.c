#include<stdio.h>
int main()
{
	int iRow,iColumn;		/*��������ѭ���ı���*/
    char cDiamond[][30]={{'*',' ',' ','*',' ', '*','*','*','*',' ', '*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*','*','*','*','*'},			/*��ʼ����ά�ַ�����*/
                        {'*',' ',' ','*',' ', '*',' ',' ',' ',' ', '*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ','*'},
						{'*','*','*','*',' ', '*','*','*','*',' ', '*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ','*'},
                        {'*',' ',' ','*',' ', '*',' ',' ',' ',' ', '*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ','*'},
                        {'*',' ',' ','*',' ', '*','*','*','*',' ', '*','*','*','*',' ',' ','*','*','*','*',' ','*','*','*','*','*'}};
	for(iRow=0;iRow<5;iRow++)		/*����ѭ�������������*/
	{
		for(iColumn=0;iColumn<30;iColumn++)
		{
			printf("%c",cDiamond[iRow][iColumn]);	/*�������Ԫ��*/
		}
		printf("\n");		/*���л���*/
	}
	return 0;
}