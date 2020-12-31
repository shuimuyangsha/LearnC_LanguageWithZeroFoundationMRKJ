#include<stdio.h>/*包含头文件*/

void Cook();	/*声明函数*/
void Fish();	/*声明函数*/
void Poem();	/*声明函数*/

int main()
{
	Cook();	    /*执行函数*/

	Fish();	    /*执行函数*/

	Poem();	    /*执行函数*/

	return 0;   /*程序结束*/
}

 
void Cook()     /*自定义做饭函数*/
{
	printf("会做饭\n");
}
 
void Fish()     /*自定义钓鱼函数*/
{
	printf("会钓鱼\n");
}
 
void Poem()     /*自定义写诗函数*/
{
	printf("会写诗\n");
}