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
    printf("�����ַ�����\n");
    gets(orig);
    change(orig);
    printf("ת��֮����ַ����ǣ�\n");
    puts(orig);
    return 0;
}