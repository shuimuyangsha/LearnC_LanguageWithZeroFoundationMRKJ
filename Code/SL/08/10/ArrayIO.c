#include<stdio.h>
int main()
{
	int iIndex;								/*ѭ�����Ʊ���*/
	char cArray[12]="MingRi KeJi";			/*�����ַ��������ڱ����ַ���*/

	for(iIndex=0;iIndex<12;iIndex++)
	{
		printf("%c",cArray[iIndex]); 		/*�������ַ������е��ַ�*/
	}
	printf("\n%s\n",cArray); 		        /*ֱ�ӽ��ַ������*/
	return 0;
}
