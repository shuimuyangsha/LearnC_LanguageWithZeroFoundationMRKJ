#include<stdio.h>

int main()
{
	char cGrade;	/*定义变量表示分数的级别*/
	printf("please enter your grade\n");/*提示信息*/
	scanf("%c",&cGrade);		/*输入分数的级别*/
	printf("Grade is about:");	/*提示信息*/
	switch(cGrade)		/*switch语句判断*/
	{
	case 'A':		/*分数级别为A的情况*/
		printf("90~100\n");		/*输出分数段*/
		break;		/*跳出*/
	case 'B':		/*分数级别为B的情况*/
		printf("80~89\n");	/*输出分数段*/
		break;		/*跳出*/
	case 'C':		/*分数级别为C的情况*/
		printf("70~79\n");	/*输出分数段*/
		break;		/*跳出*/
	case 'D':		/*分数级别为D的情况*/
		printf("60~69\n");	/*输出分数段*/
		break;		/*跳出*/
	case 'F':		/*分数级别为F的情况*/
		printf("<60\n");	/*输出分数段*/
		break;		/*跳出*/
	default:		/*默认情况*/
		printf("You enter the char is wrong!\n");	/*提示错误*/
		break;		/*跳出*/
	}
	return 0;
}