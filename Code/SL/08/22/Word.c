#include <stdio.h>                               /*����ͷ�ļ�*/

int main()                                      /*������main*/
{
	int i;                                      /*����ѭ������*/
	char String[5]  = {"live"};                 /*�����ַ����鲢��ʼ��*/
	char Reverse[5] = {0};                      /*�����ַ����飬�����洢��ת����ַ���*/
	int size;
	size = sizeof(String);	                    /*����Դ�ַ�������*/
	for(i=0;i<4;i++)                        	/*ѭ����ȡ�ַ�*/
	{
		Reverse[size-i-2] = String[i];	        /*��Ŀ���ַ����в����ַ�*/
	}
	printf("���Դ�ַ�����%s\n",String);	    /*���Դ�ַ���*/
	printf("����������ַ�����%s\n",Reverse);   /*���Ŀ���ַ���*/
	return 0;						            /*�������*/
}

