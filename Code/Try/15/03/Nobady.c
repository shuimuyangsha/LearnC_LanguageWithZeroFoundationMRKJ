#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char filename[30],str[30]; 
	printf("please input filename:\n");
	scanf("%s",filename); 
	if((fp=fopen(filename,"w"))==NULL) 
	{
		printf("can not open!\npress any key to continue:\n");
		getchar();
		exit(0);
	}
	printf("please input string:\n"); 
	getchar();
	gets(str);
	fputs(str,fp); 
	fclose(fp);
    return 0;
}
