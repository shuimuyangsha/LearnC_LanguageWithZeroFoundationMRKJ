#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	int n;
	char ch,filename[50];
	printf("please input filename:\n");
	scanf("%s",filename);							 
	if((fp=fopen(filename,"r"))==NULL) 				 
	{
		printf("cannot open this file.\n");
		exit(0);
	}
	ch = fgetc(fp);				
	while (ch != EOF)				
	{
		putchar(ch);								 
		ch = fgetc(fp); 						 
	}
	n=ftell(fp);
    if(6==n)
	printf("\n…Ë÷√√‹¬Î≥…π¶\n");
    else
	printf("\n…Ë÷√√‹¬Î ß∞‹\n");
	fclose(fp); 								 
    return 0;
}
