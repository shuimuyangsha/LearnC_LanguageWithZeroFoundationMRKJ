#include<stdio.h>
int main()
{
    int V1=0/3600,V2=100000/3600;       /*�ٶ�km/hת��Ϊm/s*/
	float  t=8.7f;                      /*����ʱ��*/
    double a;                           /*������ٶ�*/
    a=(V2-V1)/t;                        /*���ٶȼ�����ʽ*/
    printf("���ٶ�a=%f\n",a);
    return 0;	                        /*�������*/
}