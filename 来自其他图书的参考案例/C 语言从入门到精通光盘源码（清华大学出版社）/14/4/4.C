#include<stdio.h>
#include<process.h>
main()
{
	FILE *fp;
	char filename[30],str[30];/*定义两个字符型数组*/
	printf("please input filename:\n");
	scanf("%s",filename);/*输入文件名*/
	if((fp=fopen(filename,"r"))==NULL)/*判断文件是否打开失败*/
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fgets(str,sizeof(str),fp);/*读取磁盘文件中的内容*/
	printf("%s",str);
	fclose(fp);
}
