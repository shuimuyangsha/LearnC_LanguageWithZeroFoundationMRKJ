#include<stdio.h>

int main()
{
	 
	char cArray[50]="apple,pear,peach,cherry,banana";
	int i;						/*ѭ�����Ʊ���*/
    printf("���в���ˮ�����£�\n");
	for(i=0;i<50;i++)			/*����ѭ��*/
	{
		printf("%c",cArray[i]);	/*����ַ�����Ԫ��*/
	}
    printf("\n");
	return 0;
}