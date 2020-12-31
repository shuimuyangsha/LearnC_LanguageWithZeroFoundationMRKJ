#include<stdio.h>                           /*包含头文件*/
struct Book	                                /*定义图书结构体*/							 
{
	char cName[20];                         /*书架类别*/							 
	int  iNumber;                           /*书架编号*/							 
	char cS[20];                            /*图书编号*/							 
		
}book={"electric",56,"134-467"};            /*对结构体变量初始化*/		 
int main()                                  /*主函数main*/
{
	struct  Book* pStruct;                  /*定义结构体类型指针*/			 
	pStruct=&book;                          /*指针指向结构体变量*/					 
	printf("-----the bookcase's information-----\n");/*提示信息*/	 
	printf("书架类别是: %s\n",(*pStruct).cName);     /*使用指针输出结构体成员*/		 
	printf("书架编号: %d\n",(*pStruct).iNumber); 
	printf("图书编号: %s\n",(*pStruct).cS); 
	return 0;                                        /*程序结束*/
}