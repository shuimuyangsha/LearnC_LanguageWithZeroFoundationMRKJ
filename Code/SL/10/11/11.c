#include<stdio.h>
void main()
{
	char str1[]="you are beautiful",str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;								/*ָ���ƶ�*/
		p2++;
	}
	*p2='\0'; 									/*���ַ�����ĩβ�ӽ�����*/
	printf("Now the string2 is:\n");
	puts(str1); 								/*����ַ���*/
}
