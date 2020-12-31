#include<stdio.h>
int main()
{
	int iIndex;								/*循环控制变量*/
    int  length=0;                          /*定义变量length保存字符串长度*/
	char cArray[80];			            /*定义字符数组用于保存字符串*/
    printf("请输入字符串：\n");
    gets(cArray);
	for(iIndex=0;cArray[iIndex]!='\0';iIndex++)
	{
      	length++; 
	}
	 printf("字符串长度是：%d\n",length); 		 
	return 0;
}
