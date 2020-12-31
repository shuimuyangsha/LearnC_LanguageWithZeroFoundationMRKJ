#include<stdio.h>

int main()
{
	char i;		/*声明变量*/
    printf("请输入字符:\n");
	i=getchar();			/*得到回车字符*/
	printf("ASC值十进制为%d\n",i);
	return 0;			/*程序结束*/
}