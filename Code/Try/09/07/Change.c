#include<stdio.h>
void change(char *str)
{
     while(*str)
     {
        if(*str>='a'&&*str<='z')
        *str-=32;
        *str++;
     }
   
   
}
int main()
{  
    char orig[80];
    printf("输入字符串：\n");
    gets(orig);
    change(orig);
    printf("转化之后的字符串是：\n");
    puts(orig);
    return 0;
}