#include<stdio.h>
int main()
{
	char cChar1;						    /*�ַ��ͱ���cChar1*/
	char cChar2;					    	/*�ַ��ͱ���cChar2*/
	int	 iInt1;					        	/*���ͱ���iInt1*/
	int 	 iInt2;						    /*���ͱ���iInt1*/

	cChar1='a';						        /*Ϊ������ֵ*/
	cChar2=97;						
	iInt1='a';
	iInt2=97;

	printf("%c\n",cChar1);				    /*��ʾ���Ϊa*/
	printf("%d\n",cChar2);				    /*��ʾ���Ϊ97*/
	printf("%c\n",iInt1);					/*��ʾ���Ϊa*/
	printf("%d\n",iInt2);					/*��ʾ���Ϊ97*/
	return 0;							    /*�������*/
}
