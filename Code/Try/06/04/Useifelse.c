#include<stdio.h>
int main()
{
    int year,sal=5000,bon=300 ;                             /*���������ʾ�����ͻ������ʺ�ȫ�ڽ�*/
    scanf("%d",&year);                                      /*��������*/
    if(year>5)                                              /*�ж���������*/
         printf("���Ĺ���Ϊ��%d\n",sal+bon+2*bon);
    else 
         printf("���Ĺ���Ϊ��%d\n",sal+bon);
    return 0;
}