#include<stdio.h>                   /*����ͷ�ļ�*/

int getTemperature();	            /*��������*/
 
int main()                          /*������main*/
{
	getTemperature();               /*���ú���*/
	return 0;                       /*�������*/
}

 
int getTemperature()                        /*�Զ����¶Ⱥ���*/
{
	int temperature;						/*�������ͱ���*/
	printf("please input a temperature:\n");/*�����ʾ��Ϣ*/
	scanf("%d",&temperature);				/*����һ�����ͱ���*/
    printf("��ǰ�����ǣ�%d\n",temperature); /*�����ǰ�¶�*/
	return temperature;                     /*�����¶�ֵ*/			
}
 
 