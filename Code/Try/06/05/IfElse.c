#include<stdio.h>
int main()
{
    int time;                                       /*�������*/
    scanf("%d",&time);                              /*����ʱ��*/
    if(time<12)                                     /* ����ʱ��Ƚ�*/
        printf("Good day\n"); 
    if(time==12)                                        
        printf("Good Noon\n");
    else                                        
        printf("Good evening\n");
      return 0;
}