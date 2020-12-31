#include<stdio.h>                           /*包含头文件*/
int main()                                  /*主函数main*/
{
    int iArray[3], index;				    /*定义数组及变量为基本整型*/
    printf("请输入语文、数学和英语成绩:\n");/*提示信息，输入成绩*/

    for (index= 0; index<3; index++)		/*逐个输入数组元素*/
	{
		scanf("%d", &iArray[index]);				
	}
        

    printf("语文、数学和英语成绩分别是:\n");/*提示信息，输出成绩*/
    for (index = 0; index< 3; index++)			    /*显示数组中的元素*/
	{
		printf("%d\t", iArray[index]);
	}
    printf("\n");                                   /*输出换行*/

	return 0;                                       /*程序结束*/
}
