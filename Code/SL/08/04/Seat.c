#include<stdio.h>                                       /*����ͷ�ļ�*/

int main()                                              /*������main*/
{
	int index;                                          /*�������ѭ������*/
	int iArray[]={14,25,45,85,15,65,4,5,53,12};			/*��ָ��Ԫ�ظ������г�ʼ��*/
	for(index=0;index<10;index++)                       /*�������Ԫ��*/
	{
		printf("Spare seat number:%d\n",iArray[index]);	/*��ʾ��Ԫ��*/
	}
	return 0;                                           /*�������*/
}