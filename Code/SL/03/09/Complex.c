#include<stdio.h>

int main()
{
	int   iInt=1;				    	/*�������ͱ���*/
	char  cChar='A';				    /*ASCII��Ϊ65*/
	float fFloat=2.2f;				    /*���嵥�����ͱ������ͱ���*/

	double result=iInt+cChar+fFloat;	/*�õ���ӵĽ��*/

	printf("%f\n",result);		    	/*��ʾ����ֵ*/
	return 0;					    	/*�������*/
}