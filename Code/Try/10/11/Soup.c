#include<stdio.h>
int main()
{
	char str1[]="但你决定怎样去面对，那是运",str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;								/*指针移动*/
		p2++;
	}
	*p2='\0'; 									/*在字符串的末尾加结束符*/
	printf("很多事先天注定，那是命;\n");
	puts(str1); 								/*输出字符串*/
    return 0;
}
