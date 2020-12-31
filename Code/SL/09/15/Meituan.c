#include<stdio.h>/*包含头文件*/

int main()/*主函数main*/
{
    int merchant1;/*定义变量*/
    printf("米线店套餐如下：1：考神套餐 2：单人套餐 3：情侣套餐\n");
	
	if(merchant1=1)
	{	
        /*iNumber2的作用域在if语句块中*/
        int iNumber2;
        printf("考神套餐13元\n");
	
		if(iNumber2=2)
		{
            /*iNumber3的作用域在if语句块中*/
            int iNumber3;
            printf("单人套餐9.9元\n");
		
        if(iNumber3=3)
		{
			printf("情侣套餐20元\n");/*将3个都在此作用域的函数进行输出*/
		}
        }
	}
	return 0;
}