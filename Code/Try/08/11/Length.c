#include<stdio.h>
int main()
{
	int iIndex;								/*ѭ�����Ʊ���*/
    int  length=0;                          /*�������length�����ַ�������*/
	char cArray[80];			            /*�����ַ��������ڱ����ַ���*/
    printf("�������ַ�����\n");
    gets(cArray);
	for(iIndex=0;cArray[iIndex]!='\0';iIndex++)
	{
      	length++; 
	}
	 printf("�ַ��������ǣ�%d\n",length); 		 
	return 0;
}
