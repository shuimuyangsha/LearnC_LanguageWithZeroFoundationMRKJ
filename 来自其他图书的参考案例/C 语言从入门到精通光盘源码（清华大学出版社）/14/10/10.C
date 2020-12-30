#include<stdio.h>
#include<process.h>
main()
{
	FILE *fp;
	int n;
	char ch,filename[50];
	printf("please input filename:\n");
	scanf("%s",filename);							/*输入文件名*/
	if((fp=fopen(filename,"r"))==NULL) 				/*以只读方式打开该文件*/
	{
		printf("cannot open this file.\n");
		exit(0);
	}
	ch = fgetc(fp);				
	while (ch != EOF)				
	{
		putchar(ch);								/*输出字符*/
		ch = fgetc(fp); 							/*获取fp指向文件中的字符*/
	}
	n=ftell(fp);
	printf("\nthe length of the string is:%d\n",n);
	fclose(fp); 									/*关闭文件*/
}
