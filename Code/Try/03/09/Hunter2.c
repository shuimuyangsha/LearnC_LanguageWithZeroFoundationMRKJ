#include<stdio.h>

int main()
{
	int   iInt1=10;					/*�������ͱ���*/
    int   iInt2=6;
	char  cChar='a';				/*ASCII��Ϊ97*/
	float fFloat1=1.5f;				/*���嵥�����ͱ������ͱ���*/
    float fFloat2=3.2f;

	double result=(iInt1+cChar)-fFloat1+fFloat2*iInt2 ;	/*�õ���ӵĽ��*/

	printf("%f\n",result);			/*��ʾ����ֵ*/
	return 0;						/*�������*/
}