#include<stdio.h>                   /*包含头文件*/
void _strcat(char str1[],char str2[])/*自定义strcat()函数*/
{
     int i,j;                       /*定义控制变量*/
     for(i=0;str1[i]!='\0';i++);    /*字符数组1中循环*/
        for(j=0;str2[j]!='\0';j++)  /*字符数组2中循环*/
            str1[i+j]=str2[j];      /*字符串连接*/
      
         str1[i+j]='\0';            /*结束*/
    
}
int main()                          /*主函数main*/
{
   
    char str1[100],str2[100];       /*定义字符数组*/
	printf("请输入字符串1:\n");     /*提示信息*/
	gets(str1);                     /*输入字符串1*/
    printf("请输入字符串2:\n");     /*提示信息*/
	gets(str2);                     /*输入字符串2*/
    _strcat(str1,str2);              /*调用函数连接2个字符串*/
    printf("连接之后的字符串是：%s\n",str1);/*显示连接后的字符串*/
    return 0;                       /*程序结束*/
}
