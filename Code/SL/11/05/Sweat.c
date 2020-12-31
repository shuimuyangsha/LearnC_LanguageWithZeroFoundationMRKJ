#include<stdio.h>               /*包含头文件*/
#include<string.h>


struct Sweat                    /*定义衣服结构体*/						 
{
	char cName[20];	            /*衣服类别*/				 
	int  iNumber;               /*衣服价格*/						 
	char cColor[20];            /*衣服颜色*/						 
}sweat;	                        /*定义变量*/						 

int main()                      /*主函数main*/
{

	struct Sweat* pStruct;      /*定义结构体变量*/					 
	pStruct=&sweat;	            /*指针指向结构体变量*/					 

	strcpy(pStruct->cName,"毛呢外套");	         /*赋值类别*/ 
	pStruct->iNumber=599;                        /*赋值价格*/				 
    strcpy(pStruct->cColor,"粉色");              /*赋值颜色*/

	printf("-----the sweat's information-----\n");/*提示信息*/	 
	printf("种类: %s\n",sweat.cName);             /*输出结构体成员*/	 
	printf("价格: %d元\n",sweat.iNumber);
	printf("颜色: %s\n",sweat.cColor);
	return 0;                                     /*程序结束*/
}
