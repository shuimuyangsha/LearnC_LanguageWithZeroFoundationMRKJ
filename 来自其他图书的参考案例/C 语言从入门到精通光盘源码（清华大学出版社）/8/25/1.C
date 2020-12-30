#include<stdio.h>
main()
{
	char s1[30],s2[30];
	int i=0;
	printf("ÇëÊäÈë×Ö·û´®1:\n");
	gets(s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("×Ö·û´®2:\n");
	puts(s2);
}
