#include<stdio.h>

int main()
{
	char cGrade;	                    /*���������ʾ�����ļ���*/
	printf("please enter your grade\n");/*��ʾ��Ϣ*/
	scanf("%c",&cGrade);		        /*��������ļ���*/
	printf("Grade is about:");	        /*��ʾ��Ϣ*/
	switch(cGrade)		                /*switch����ж�*/
	{
	case 'A':		                    /*��������ΪA�����*/
		printf("90~100\n");		        /*���������*/
		break;		                    /*����*/
	case 'B':		                    /*��������ΪB�����*/
		printf("80~89\n");	            /*���������*/
		break;		                    /*����*/
	case 'C':		                    /*��������ΪC�����*/
		printf("70~79\n");	            /*���������*/
		break;		                    /*����*/
	case 'D':		                    /*��������ΪD�����*/
		printf("60~69\n");	            /*���������*/
		break;	                    	/*����*/
	case 'F':		                    /*��������ΪF�����*/
		printf("<60\n");	            /*���������*/
		break;		                    /*����*/
	default:		                    /*Ĭ�����*/
		printf("You enter the char is wrong!\n");	/*��ʾ����*/
		break;		                    /*����*/
	}
	return 0;
}