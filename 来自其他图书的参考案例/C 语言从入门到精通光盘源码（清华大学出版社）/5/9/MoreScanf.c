#include<stdio.h>

int main()
{
	long iLong;		/*�����ͱ���*/
	short iShort;	/*�����ͱ���*/
	int iNumber1=1;	/*���ͱ�����Ϊ�丳ֵΪ1*/
	int iNumber2=2;	/*���ͱ�����Ϊ�丳ֵΪ2*/
	char cChar[10];	/*�����ַ��������*/

	printf("Enter the long integer\n");	/*�����Ϣ��ʾ*/
	scanf("%ld",&iLong);				/*���볤��������*/
	
	printf("Enter the short integer\n");/*�����Ϣ��ʾ*/	
	scanf("%hd",&iShort);				/*�������������*/
	
	printf("Enter the number:\n");		/*�����Ϣ��ʾ*/
	scanf("%d*%d",&iNumber1,&iNumber2);	/*������������*/

	printf("Enter the string but only show three character\n");/*�����Ϣ��ʾ*/
	scanf("%3s",cChar);					/*�����ַ���*/

	printf("the long interger is: %ld\n",iLong);  /*��ʾ������ֵ*/
	printf("the short interger is: %hd\n",iShort);	/*��ʾ������ֵ*/
	printf("the Number1 is: %d\n",iNumber1);		/*��ʾ����iNumber1��ֵ*/
	printf("the Number2 is: %d\n",iNumber2);		/*��ʾ����iNumber2��ֵ*/
	printf("the three character are: %s\n",cChar);	/*��ʾ�ַ���*/
	
	return 0;
}