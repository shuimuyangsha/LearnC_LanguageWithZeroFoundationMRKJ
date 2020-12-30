#include<stdio.h>

int main()
{
	char* ArrayName[5];		/*字符指针数组*/
	int index;				/*循环控制变量*/
	ArrayName[0]="WangJiasheng";	/*为数组元素赋值*/
	ArrayName[1]="LiuWen";
	ArrayName[2]="SuYuqun";
	ArrayName[3]="LeiYu";
	ArrayName[4]="ZhangMeng";
	for(index=0;index<5;index++)	/*使用循环显示名称*/
	{
		printf("%s\n",ArrayName[index]);
	}
	
	return 0;
}