#include<stdio.h>                       /*����ͷ�ļ�*/

void judgeTemperature(int temperature);	/*��������*/
int getTemperature();                   /*��������*/
 
int main()                              /*������main*/
{
	judgeTemperature(getTemperature()); /*���ú���*/
	return 0;                           /*�������*/
}
int getTemperature()                    /*�������º���*/
{
	int temperature;                    /*�������ͱ���*/
	printf("please input a temperature:\n");/*�����ʾ��Ϣ*/
	scanf("%d",&temperature);               /*��������*/
	printf("��ǰ�����ǣ�%d\n",temperature); /*�����ǰ����ֵ*/
 	return temperature;	                    /*��������ֵ*/		
}
 
void judgeTemperature(int temperature)      /*�Զ���������������*/
{
    
 if(temperature<=37.3f&& temperature>=36)   /*�ж�����ֵ�Ƿ�����*/
     printf("��������\n");
 else
     printf("���²�����\n");
}
 
 
 

 
 