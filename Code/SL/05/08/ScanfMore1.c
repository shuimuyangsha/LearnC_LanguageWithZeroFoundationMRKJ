#include <stdio.h>              /*����ͷ�ļ�*/
int main()                      /*������main*/
{
    int x,y;                    /*�������*/
    printf("please enter two numbers:\n");   /*��ʾ��Ϣ*/
    scanf("x=%d,y=%d",&x,&y);   /*����x,y����*/
    x=y-x;                      /*����x,y��ֵ*/
    y=y-x;
    x=y+x;   
    printf("x=%d,y=%d\n",x,y);  /*��������������*/
    return 0;                   /*�������*/
}