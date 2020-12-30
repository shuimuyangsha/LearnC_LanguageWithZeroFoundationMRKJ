#include<stdio.h>
#include<process.h>
main()
{
	FILE *fp;
	char filename[30],str[50];/*定义两个字符型数组*/
	printf("please input filename:\n");
	scanf("%s",filename);/*输入文件名*/
	if((fp=fopen(filename,"wb"))==NULL)/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	printf("please input string:\n");
	getchar();
	gets(str);
	fputs(str,fp);
	fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL)/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fseek(fp,5L,0);
	fgets(str,sizeof(str),fp);
	putchar('\n');
	puts(str);
	fclose(fp);
}
