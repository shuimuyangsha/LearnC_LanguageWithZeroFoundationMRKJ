#include<stdio.h>

int main()
{
	int iCount,iSum;	/*�������*/
	/*��forѭ���У�Ϊ������ֵ����ѭ����������������������*/
	for(iSum=0,iCount=0;iCount<=100;iCount++,iCount++)
	{
		iSum=iSum+iCount;	/*�����ۼӼ���*/
	}
	printf("the result is:%d\n",iSum);/*������*/
	return 0;
}