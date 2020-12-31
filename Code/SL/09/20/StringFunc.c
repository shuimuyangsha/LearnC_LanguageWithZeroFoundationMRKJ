#include<stdio.h>
#include<ctype.h>

void SwitchShow(char c);

int main()
{
	char cCharPut;		/*定义字符变量，用来接收输入的字符*/
	char cCharTemp;		/*定义字符变量，用来接收回车的*/


	printf("First enter:");			/*消息提示，第一次输入字符*/
	scanf( "%c", &cCharPut);		/*输入字符*/			
	SwitchShow(cCharPut);			/*调用函数进行判断*/
	cCharTemp=getchar();			/*接收回车*/


	printf("Second enter:");		/*消息提示，进行第二次输入字符*/
	scanf( "%c", &cCharPut);		/*输入字符*/
	SwitchShow(cCharPut);			/*调用函数判断输入的字符*/
	cCharTemp=getchar();			/*接收回车 */

	printf("Third enter:");			/*消息提示，进行第三次输入字符*/
	scanf( "%c", &cCharPut);		/*输入字符*/
	SwitchShow(cCharPut);			/*调用函数判断输入的字符*/

	return 0;						/*程序结束*/
}

void SwitchShow(char cChar)
{
	if(isalpha(cChar))			/*判断是否是字母*/
	{
		printf("You entered a letter of the alphabet %c\n",cChar);
	}

	if(isdigit(cChar))			/*判断是否是数字*/
	{
		printf("You entered the digit %c\n", cChar);
	}
	
	if(isalnum(cChar))			/*判断是否是字母或者是数字*/
	{
		printf("You entered the alphanumeric character %c\n", cChar);
	}

	else						/*当字符既不是字母也不是数字时*/
	{
		printf("You entered the character is not alphabet or digit :%c\n", cChar);
	}
}

