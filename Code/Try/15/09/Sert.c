#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
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
    printf("\n");
	rewind(fp);
	ch = fgetc(fp);			
	while (ch != EOF)					
	{
		putchar(ch); 								 
		ch = fgetc(fp);			
	}
	fclose(fp); 									 
    return 0;
}
