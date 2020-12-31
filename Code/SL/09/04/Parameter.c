#include<stdio.h>/*包含头文件*/

void Scrip(char* lead);			 /*声明函数*/

int main()
{
	char cSelect[]="";			/*定义字符数组变量*/
	printf("导演选定主角是:");	/*输出信息提示*/
	scanf("%s",&cSelect);
	Scrip(cSelect);			/*将实际参数传递给形式参数*/
	return 0;					/*程序结束*/
}

/*演员开始演出这个剧本*/
void Scrip(char* lead)			/*lead为形式参数*/	
{
	printf("%s开始参演这个剧本\n",lead);/*输出提示，参演剧本*/
}