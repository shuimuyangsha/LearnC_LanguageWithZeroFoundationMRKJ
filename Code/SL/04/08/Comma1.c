#include <stdio.h>                              /*����ͷ�ļ�*/
int main()                                      /*������main*/
{
    int a=10,b=20,c=30,x;                       /*�������������ֵ*/
    x=a = b+c,b*a,c-b;                          /*���㶺�ű��ʽ*/
    printf("x=%d,a=%d, b=%d, c=%d\n",x,a,b,c);  /*����������ʾ*/
    return 0;                                   /*�������*/
}