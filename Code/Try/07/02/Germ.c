#include<stdio.h>
#include <math.h>
int main()
{
    int x=1;                                 /*���������ʾ����*/
    int num=1;                                /*���������ʾ������*/
   while(x<=12)
     {
         num*=2;                     /*�ɱ�������*/
         x++;
      }
     printf("��ʮ���������е�ϸ��������%d\n",num);
     
      return 0;
}