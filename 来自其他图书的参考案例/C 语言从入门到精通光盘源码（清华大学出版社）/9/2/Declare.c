#include<stdio.h>

void ShowNumber(int iNumber);		/*����������*/

int main()
{
	int   iShowNumber;				/*�������ͱ���*/
	printf("What Number do you wanna show?\n");	/*�����ʾ��Ϣ*/
	scanf("%d",&iShowNumber);		/*��������*/
	ShowNumber(iShowNumber);		/*���ú���*/
	return 0;						/*�������*/
}

/*�����Ķ���*/
void ShowNumber(int iNumber)		
{			
	printf("You wanna to show the Number is:%d\n",iNumber);/*�������*/
}