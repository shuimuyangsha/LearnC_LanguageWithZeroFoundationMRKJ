#include<stdio.h>               /*����ͷ�ļ�*/

int main()                      /*������main*/
{
	 
	char cArray[5]={'P','a','r','k'};      /*�����ַ����鲢��ʼ��*/
	int i;						/*ѭ�����Ʊ���*/
	for(i=0;i<5;i++)			/*����ѭ��*/
	{
		printf("%c",cArray[i]);	/*����ַ�����Ԫ��*/
	}
	printf("\n");				/*�������*/
	return 0;                   /*�������*/
}