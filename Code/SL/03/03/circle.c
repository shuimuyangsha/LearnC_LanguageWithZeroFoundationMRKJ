#include<stdio.h>
#define PAI 3.14				        /*������ų���*/

int main()
{
	double fRadius;				        /*����뾶����*/
	double fResult=0;			        /*����������*/
	printf("������Բ�İ뾶:");	        /*��ʾ*/

	scanf("%lf",&fRadius);		        /*��������*/

	fResult=fRadius*fRadius*PAI;	    /*���м���*/
	printf("Բ�����Ϊ��%lf\n",fResult);/*��ʾ���*/
	return 0;				            /*�������*/
}