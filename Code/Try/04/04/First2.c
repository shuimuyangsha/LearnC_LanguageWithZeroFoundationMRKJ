#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,num6,res;           /*�������ͱ���*/
    num1=1;                                          /*Ϊ������ֵ*/
    num2=2;
    num3=3;
    num4=4;
    num5=5;
    num6=6;
    res=num1*num2+num3*num4+num5*num6;              /*�ӷ����˷����ʽ*/
    printf("res=%d\n",res);                         /*��ʾ���*/
    res=num1*(num2+(num3*(num4+(num5*num6))));       /*���š��ӷ����˷����ʽ*/
    printf("res=%d\n",res);                         /*��ʾ���*/
    return 0;
}