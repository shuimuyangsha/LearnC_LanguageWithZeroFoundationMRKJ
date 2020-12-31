#include<stdio.h>
#include<string.h>

int main()
{
	char text[50];
	 

	printf("请用how造句:\n");
	scanf("%s", &text); 								/*获取输入的字符串*/
 						
     if(strlen(text)>=3&&strlen(text)<30)	            /*计算字符串长度*/
        printf("写句成功\n");
    else
        printf("写句子失败\n");
 
	return 0;											/*程序结束*/
}

