#include<stdio.h>
int main()
{
	int iIndex;								/*ѭ�����Ʊ���*/
	char cArray[33]="Education is the door to freedom";			/*�����ַ��������ڱ����ַ���*/

	for(iIndex=0;iIndex<33;iIndex++)
	{
		printf("%c",cArray[iIndex]); 		/*�������ַ������е��ַ�*/
	}
	printf("\n"); 		/*ֱ�ӽ��ַ������*/
	return 0;
}
