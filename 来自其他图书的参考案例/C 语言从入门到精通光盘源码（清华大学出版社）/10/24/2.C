#include<stdio.h>
#include<string.h>
main()
{
char str1[60],str2[30];
printf("please input string1:\n");
gets(str1);
printf("please input string2:\n");
gets(str2);
strcat(str1,str2);
printf("the string1 is:\n");
puts(str1);
}
