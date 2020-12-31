#include<stdio.h>                                       /*包含头文件*/

int main()                                              /*主函数main*/
{
	int index;                                          /*定义控制循环变量*/
	int iArray[]={14,25,45,85,15,65,4,5,53,12};			/*不指定元素个数进行初始化*/
	for(index=0;index<10;index++)                       /*输出数组元素*/
	{
		printf("Spare seat number:%d\n",iArray[index]);	/*显示各元素*/
	}
	return 0;                                           /*程序结束*/
}