#include<stdio.h>
#include<string.h>
main()
{
char str1[30],str2[30];
char *p1,*p2;
p1=str1;
p2=str2;
printf("please input string1:\n");
gets(str1);
while(*p1!='\0')
{
*p2=*p1;
p1++;
p2++;
}
*p2='\0';
printf("the string2 is:\n");
puts(str2);
}
