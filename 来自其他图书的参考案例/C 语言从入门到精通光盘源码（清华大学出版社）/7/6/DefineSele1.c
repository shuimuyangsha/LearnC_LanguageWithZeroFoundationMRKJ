#include<stdio.h>

int main()
{
	int iNumber=1;	/*���������Ϊ��������ʼֵ*/
	int iSum=0;		/*��������Ľ��*/
	/*ʹ��forѭ��*/
	for(;iNumber<=100;iNumber++)
	{
		iSum=iNumber+iSum;/*�ۼӼ���*/
	}
	printf("the result is:%d\n",iSum);/*���������*/

	return 0;
}
