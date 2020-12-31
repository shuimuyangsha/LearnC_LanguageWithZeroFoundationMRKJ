#include<stdio.h>


void  CEO();				/*声明函数*/
void  Manager();
void  AssistantManager();
void  Clerk();

int main()
{
	CEO();					/*调用CEO的作用函数*/
	return 0;
}

void  CEO()
{
	/*输出信息，表示调用CEO函数进行相应的操作*/
	printf("CEO给经理安排任务\n");
	Manager();              /*调用CEO的功能函数*/
}

void  Manager()
{
	/*输出信息，表示调用Manager函数进行相应的操作*/
	printf("经理给副经理安排任务\n");
	AssistantManager();         /*调用CEO的作用函数*/
}

void  AssistantManager()
{
	/*输出信息，表示调用AssistantManager函数进行相应的操作*/
	printf("副经理给职员安排任务\n");
	Clerk();/*调用CEO的作用函数*/
}

void Clerk()
{
	/*输出信息，表示调用Clerk函数进行相应的操作*/
	printf("职员执行任务\n");
}