
#include<stdio.h>

int main()
{
	int iSum=0;			/*�����������ʾ�����ܺ�*/
	int iNumber=1;		/*��ʾÿһ������*/

	while(iNumber<=100)	/*ʹ��whileѭ��*/
	{
		iSum=iSum+iNumber;	/*�����ۼ�*/
		iNumber++;			/*��������*/
	}
	printf("the result is��%d\n",iSum);	/*��������*/
	return 0;
}
