#include<stdio.h>
int main()
{
    int month;                          /*��������·�*/
    printf("please enter a month:\n");
    scanf("%d",&month);                 /*�����·�*/
       switch(month)                    /*�����·ݷּ���*/
       {
       /*��·����ģʽ*/
       case 3:
       case 4:    
       case 5:
           printf("%d is spring\n",month);/*3,4,5���Ǵ���*/
           break;
        /*��·����ģʽ*/
       case 6:
       case 7:    
       case 8:
           printf("%d is summer\n",month);/*6,7,8�����ļ�*/
           break;
       /*��·����ģʽ*/
       case 9:
       case 10:    
       case 11:
           printf("%d is autumn\n",month);/*9,10,11�����＾*/
           break;
       /*��·����ģʽ*/
       case 12:
       case 1:    
       case 2:
           printf("%d is winter\n",month);/*12,1,2���Ƕ���*/
           break;
       default:
           printf("error!!!\n");        /*�޴��·�*/
       }
       return 0;                        /*�������*/
}