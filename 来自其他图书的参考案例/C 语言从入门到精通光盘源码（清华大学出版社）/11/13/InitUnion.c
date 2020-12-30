#include<stdio.h>

union DataUnion							/*声明共用体类型*/
{
	int iInt;								/*成员变量*/
	char cChar;			
};

int main()
{
	union DataUnion Union={97};					/*定义共用体变量，并进行初始化*/
	printf("iInt: %d\n",Union.iInt);				/*输出成员变量数据*/
	printf("cChar: %c\n",Union.cChar);
	return 0;
}
