#include<stdio.h>               /*包含头文件*/
void allitrim(char *str)        /*自定义函数*/
{
    char *p=str;                /*定义指针*/
    while(*p!=0)                /*字符串不为空*/
    {
        if(*p==' ')             /*如果是空格*/
        {
            char *q=p;          /*定义指针，保存没有空格的字符串*/
            while(*q!=0)        /*循环保存字符串*/
            {
                *q=*(q+1);
                q++;

            }
        }
        else
        {
            p++;                /*向下一位查找*/
        }
    }
   
}
int main()                      /*主函数*/
{  
    char orig[80];              /*定义变量*/
    printf("输入字符串：");     /*信息提示*/
   
    while(gets(orig)&&orig[0]!='\0')/*循环字符串直到结束*/
    {
        printf("输出字符串：");     /*提示*/
        allitrim(orig);             /*调用函数*/
        puts(orig);                 /*输出改变后的字符串*/
    }
    puts("bye!");                   /*字符为空输出的信息*/
    return 0;                       /*程序结束*/
}