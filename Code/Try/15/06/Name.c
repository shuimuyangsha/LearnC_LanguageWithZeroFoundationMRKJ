#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	char i,j;
	char filename[30]; 
	printf("please input filename:\n");
	scanf("%s",filename); 
	if((fp=fopen(filename,"r"))==NULL) 
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	for(i=0;i<15;i++)
	{
		fscanf(fp,"%c",&j);
		printf("%d answer is:%5c\n",i+1,j);
	}
	fclose(fp);
    return 0;
}
