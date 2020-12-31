#include <stdio.h>                               /*包含头文件*/

int main()                                      /*主函数main*/
{
	int i;                                      /*定义循环控制*/
	char String[5]  = {"live"};                 /*定义字符数组并初始化*/
	char Reverse[5] = {0};                      /*定义字符数组，用来存储翻转后的字符串*/
	int size;
	size = sizeof(String);	                    /*计算源字符串长度*/
	for(i=0;i<4;i++)                        	/*循环读取字符*/
	{
		Reverse[size-i-2] = String[i];	        /*向目标字符串中插入字符*/
	}
	printf("输出源字符串：%s\n",String);	    /*输出源字符串*/
	printf("反过来输出字符串：%s\n",Reverse);   /*输出目标字符串*/
	return 0;						            /*程序结束*/
}

