#include<stdio.h>                                       /*包含头文件*/
int main()                                              /*主函数main*/
{
     int line,list;                                     /*定义两个变量*/
	 printf("the theatre seats available informain:\n");/*输出提示信息*/
     
		for (line = 1; line <= 4; line++)               /*控制行数*/
        {
			for (list = 1; list <= 10; list++)          /*控制列数*/
            {
				if (list == 1 || list == 10)            /*屏蔽最左一列和最右一列操作*/
                {
					continue;                           /*使用continue屏蔽*/
				} 
                else 
                {
					printf("the %d column %d available\n",line,list);/*输出提示信息哪个座位可以出售*/
				}
			}
		}
    return 0;                                            /*程序结束*/
}
