#include<stdio.h>

void DrinkMilk(char* cBottle);			/*声明函数*/

int main()
{
	char cPoke[]="";						/*定义字符数组变量*/
	printf("Mother wanna give the baby:");	/*输出信息提示*/
	scanf("%s",&cPoke);
	DrinkMilk(cPoke);			/*将实际参数传递给形式参数*/
	return 0;					/*程序结束*/
}

/*喝牛奶的动作*/
void DrinkMilk(char* cBottle)			/*cBottle为形式参数*/
{
	printf("The Baby drink the %s\n",cBottle);/*输出提示，进行喝牛奶动作*/
}