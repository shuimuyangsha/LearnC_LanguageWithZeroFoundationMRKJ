#include<stdio.h>                           /*����ͷ�ļ�*/
#include<math.h>
int main()                                  /*������main*/
{
	int iAbsoluteNumber;					/*��������*/
	int iNumber;							/*��������*/
    int differ,ab;                          /*�������*/
    printf("�������䣺\n");
    scanf("%d,%d",&iAbsoluteNumber,&iNumber);/*����2������*/
   
    differ=iAbsoluteNumber-iNumber;	        /*��������*/			 
	ab=abs(differ);				            /*�����ľ���ֵ*/
	printf("���������%d�� \n",ab);         /*��ʾ�����������*/
	return 0;                               /*�������*/
}