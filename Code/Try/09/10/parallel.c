#include<stdio.h>

/*�����������������м���*/
void AddTwoNum(int iNum1, int iNum2,int iNum3, int iNum4);

int main()
{
	AddTwoNum(5,10,2,4);
	return 0;				                                /*�������*/
}

void AddTwoNum(int iNum1, int iNum2,int iNum3, int iNum4)	/*���庯��*/
{
	int iTempResult;		/*�������ͱ���*/
	iTempResult=iNum1*iNum4-iNum2*iNum3;/*���м��㣬���������ֵ��iTempResult*/
    if(0==iTempResult)
        printf("2������(%d,%d) (%d,%d)������ƽ�е�\n",iNum1,iNum2,iNum3,iNum4);
    else
        printf("2������(%d,%d) (%d,%d)���겻��ƽ�е�\n",iNum1,iNum2,iNum3,iNum4);
	
}