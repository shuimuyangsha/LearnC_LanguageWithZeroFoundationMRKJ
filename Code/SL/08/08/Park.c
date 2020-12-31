#include<stdio.h>               /*包含头文件*/

int main()                      /*主函数main*/
{
	 
	char cArray[5]={'P','a','r','k'};      /*定义字符数组并初始化*/
	int i;						/*循环控制变量*/
	for(i=0;i<5;i++)			/*进行循环*/
	{
		printf("%c",cArray[i]);	/*输出字符数组元素*/
	}
	printf("\n");				/*输出换行*/
	return 0;                   /*程序结束*/
}