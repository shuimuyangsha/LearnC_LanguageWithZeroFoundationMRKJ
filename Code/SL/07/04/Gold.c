#include<stdio.h>                               /*����ͷ�ļ�*/
int main()                                      /*������main*/
{
    int high=80;                                /*��������߶�*/ 
    int i;                                      /*�������*/
    
     for(i=0;i<6;i++)                           /*ʹ��for���ѭ��*/
     { 
         high/=2;                               /*ÿ�η����߶�*/
         printf("the height of the current is %d\n",high);/*��ǰ�߶�*/
     }
        printf("the height of the sixth is %d\n",high);/*��ʾ�����η����߶�*/
         
      return 0;                                 /*�������*/
}