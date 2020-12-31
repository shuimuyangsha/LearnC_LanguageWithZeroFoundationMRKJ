#include<stdio.h>                   /*包含头文件*/
struct car                          /*汽车结构体*/							 
{
	char cName[20];	                /*汽车品牌名*/					 
	int  iNumber;                   /*汽车报价*/						 
	 						 
} car[5]={{"宝马",491000},          /*定义变量并初始化*/
				{"大众",80000},
				{"路虎",1150000},
				{"五菱",50000},
				{"一汽",107800}};	 

int main()                          /*主函数main*/
{
	int i;                          /*循环控制变量*/					 
	for(i=0;i<5;i++)                /*使用for进行循环*/		 
	{
		printf("NO%d car:\n",i+1);	 
		printf("名字是: %s, 最低报价: %d元\n",car[i].cName,car[i].iNumber);/*输出数组中的元素数据*/
		printf("\n");		        /*空格行*/
	}
	return 0;                       /*程序结束*/
}