#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
    int i=1;
    int j=2;
	char filename[30]; 
	printf("please input filename:\n");
	scanf("%s",filename); 
	if((fp=fopen(filename,"w"))==NULL) 
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%4d\n",i);
    fprintf(fp,"%2d",i);
    fprintf(fp,"%4d\n",i);
    fprintf(fp,"%d",i);
    fprintf(fp,"%3d",j);
    fprintf(fp,"%4d\n",i);
	fclose(fp);
    return 0;
}
