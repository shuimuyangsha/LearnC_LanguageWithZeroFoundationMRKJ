#include<stdio.h>                                           /*����ͷ�ļ�*/
int main()                                                  /*������main*/
{
    int price=97,gue;                                       /*���������price����ȷ������gueΪ�µ���*/
    printf("please enter a number:\n");
    scanf("%d",&gue);                                       /*����µ���*/
    if(gue<price)                                           /*�ж�����µ���С����ȷ�����Ƚ�*/
    {
        printf("You guess the number is small\n");          /*�������С��*/
    }
    if(gue>price)                                           /*�ж�����µ���������ȷ�����Ƚ�*/  
    {
        printf("You guess the number is big\n");                   /*���µ�������*/
    }
    else                             
    {
        printf("You have guessed it\n");                    /*��ʾ���¶���*/
    }
      return 0;                                             /*�������*/
}