#include<stdio.h>
#include<string.h>

int main()
{
	char text[20]="ZhangSan@MRSOFT.COM",change[20];
	 printf("ԭ�ַ���Ϊ:%s\n",text);	 				/*����Ҫת�����ַ���*/
	strcpy(change,text);								/*����Ҫת�����ַ���*/
	strlwr(change);								        /*�ַ���ת��Сд*/
	printf("ת����Сд��ĸ���ַ���Ϊ:%s\n",change);		/*���ת������ַ���*/
	return 0;											/*�������*/
}

