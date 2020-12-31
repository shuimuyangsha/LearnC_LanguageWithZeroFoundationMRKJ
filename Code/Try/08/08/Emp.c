#include<stdio.h>

int main()
{
	 
	char cArray[50]="apple,pear,peach,cherry,banana";
	int i;						/*循环控制变量*/
    printf("超市部分水果如下：\n");
	for(i=0;i<50;i++)			/*进行循环*/
	{
		printf("%c",cArray[i]);	/*输出字符数组元素*/
	}
    printf("\n");
	return 0;
}