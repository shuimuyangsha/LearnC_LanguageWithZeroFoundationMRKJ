#include<stdio.h>
int main()
{
    char str[20]="I have a dream.";
    char *p;
    int word=0;
    for(p=str;*p!='\0';p++)
        if(*p==' ')
            word++;
        printf("һ����%d������\n",word+1);
        return 0;

}