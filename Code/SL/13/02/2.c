#include<stdio.h>           /*����ͷ�ļ�*/
int main()                  /*������main*/
{
     									
    int a=0xEFCA,result;    /*�������*/
    result = a|a;		    /*���������Ľ��*/
    printf("a|a=%X\n", result);/*������*/
    return 0;                  /*�������*/
}
