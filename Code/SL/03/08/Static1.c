#include <stdio.h>                  /*����ͷ�ļ�*/
 void park()                        /*����ͣ������*/
 {
	static int count = 30;          /*�������α���*/
	count = count - 1;              /*��λ����һ*/
	printf("the remaining number of parking spaces:%d\n",count);/*��ʾͣ��λʣ�����*/
}

void main()             /*������main*/
{
     park();            /*�����һ����*/
     park();            /*����ڶ�����*/
     park();            /*�����������*/
     park();            /*�����������*/
}