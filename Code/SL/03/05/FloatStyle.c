#include<stdio.h>	                        /*����ͷ�ļ�*/

int main()	                                /*������main*/
{
	float height=1.72f;			            /*���嵥���ȱ�����ʾ���*/
    int weight=70;	                        /*�������ͱ�����ʾ����*/
    float res=weight / (height * height);	/*��������������ȱ���res*/
	printf("BMI=%f\n",res);	                /*���������ֵ*/
	return 0;					            /*�������*/
}