#include<stdio.h>
#include<string.h>

int main()
{
	char text[20],change[20];
	int num;
	int i=0;

	while(1)
	{
		
		printf("输入转换大小写方式（1表示大写，2表示小写，0表示退出）:\n");
		scanf("%d", &num);	
		if(num == 1)								/*如果是转换为大写*/
		{
			printf("输入一个字符串:\n");
			scanf("%s", &text); 								/*输入要转换的字符串*/
			strcpy(change,text);								/*拷贝要转换的字符串*/
			strupr(change);								/*字符串转换大写*/
			printf("转换成大写字母的字符串为:%s\n",change);		/*输出转换后的字符串*/
		}
		else if(num == 2)									/*如果是转换为小写*/
		{
			printf("输入一个字符串:\n");
			scanf("%s", &text); 								/*输入要转换的字符串*/
			strcpy(change,text);								/*拷贝要转换的字符串*/
			strlwr(change);							/*字符串转换小写*/
			printf("转换成小写字母的字符串为:%s\n",change);		/*输出转换后的字符串*/
		}
		else if(num == 0)									/*如果命令字符为0*/
		{
			break;									/*跳出当前循环*/
		}
	}

	return 0;												/*程序结束*/
}

