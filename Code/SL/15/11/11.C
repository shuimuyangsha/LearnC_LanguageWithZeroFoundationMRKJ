#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1,*fp2;
	char ch,filename1[30],filename2[30];
	printf("请输入文件1的名字：\n");
	scanf("%s",filename1);
	printf("请输入文件2的名字：\n");
	scanf("%s",filename2);
	if((fp1=fopen(filename1,"ab+"))==NULL)
	{
		printf("can not open,press any key to continue\n");
		getchar();
		exit(0);
	}
	if((fp2=fopen(filename2,"rb"))==NULL)
	{
		printf("can not open,press any key to continue\n");
		getchar();
		exit(0);
	}
	fseek(fp1,0L,2);
	while((ch=fgetc(fp2))!=EOF)
	{
		fputc(ch,fp1);
	}
	fclose(fp1);
	fclose(fp2);
}
