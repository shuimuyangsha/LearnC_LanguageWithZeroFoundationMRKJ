#include<stdio.h>

int main()
{
	int iStep;			/*�����������ʾ�ⲿѭ������*/
	int iSelect;		/*�����û�������ѡ��*/
	for(iStep=1;iStep<10;iStep++)	/*�ⲿ����ѭ��*/
	{
		printf("The Step is:%d\n",iStep);	/*����ѭ���Ĳ������ʾ*/
		do				/*ʹ��do-while������ѭ��*/
		{
			printf("enter a number to select\n");/*�����ʾ��Ϣ*/
			printf("(0 is quit,99 for the next step)\n");
			scanf("%d",&iSelect);	/*�û�����ѡ��*/
			if(iSelect==0)		/*�ж��Ƿ��������0*/
			{
				goto exit;		/*ִ��goto��ת���*/
			}
		}
		while(iSelect!=99);		/*�����ж��û�����*/
	}
exit:		/*��ת���ִ��λ��*/
	printf("Exit the program!\n");	/*��ʾ���������Ϣ*/
	return 0;
}