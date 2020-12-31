#include<stdio.h>

void DisplayB(char* string)		/*函数B*/
{
	printf("%s\n",string);
}

void DisplayA(char* string)		/*函数A*/
{
	char String[20]="LoveWorld!";
	printf("%s\n",string);
	DisplayB(String);			/*调用函数B*/
}

int main()
{
	char String[20]="LoveChina!";	
	DisplayA(String);		/*将参数传入函数A中*/
	return 0;
}