#include<stdio.h>
int main()
{
    int num;                          /*�������Ϊ���ر��*/
    scanf("%d",&num);                 /*���뿪�ر��*/
       switch(num)                    /*���ݿ��ر������*/
       {
       case 1:
       case 2:    
       case 3:
           printf("������\n");
           break;
       case 4:
           printf("�ʵ���\n");
           break;
       case 5:    
       case 6:
           printf("�׳�ƺͽ��ܵ���\n");
           break;
       default:
           printf("���еƶ�����\n");
       }
       return 0;
}