#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp;
	int i=88;
	char filename[30];/*定义一个字符型数组*/
	printf("please input filename:\n");
	scanf("%s",filename);/*输入文件名*/
	if((fp=fopen(filename,"w"))==NULL)/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%c",i);/*将88以字符形式写入fp所指的磁盘文件中*/
	fclose(fp);
}
