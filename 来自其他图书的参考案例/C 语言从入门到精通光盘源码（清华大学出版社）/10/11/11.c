#include<stdio.h>
main()
{
	char str1[]="you are beautiful",str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;								/*指针移动*/
		p2++;
	}
	*p2='\0'; 									/*在字符串的末尾加结束符*/
	printf("Now the string2 is:\n");
	puts(str1); 								/*输出字符串*/
}
