#include<stdio.h>
int main()
{
    float money=1026,m;                          /*�������money�������Ľ�� m�Ǵ���֮����������*/
    float rebate=0.0f;                         /*�����ۿ۱���*/
       int grade=(int)money/500;               /*����ȼ�*/
       switch(grade)                           /*���ݵȼ������ۿ�*/
       {
       case 0:
           rebate=0.0f;
           m=money;
           break;
       case 1:
           rebate=0.9f;
           m=money*rebate;
           break;
       case 2:
           rebate=0.8f;
           m=money*rebate;
           break;
       case 4:
           rebate=0.7f;
           m=money*rebate;
           break;
       case 6:
           rebate=0.6f;
           m=money*rebate;
           break;
       case 10:
           rebate=0.5f;
           m=money*rebate;
           break;
       }
       printf("�˿ͽ����ܵ��ۿ�:%f\n",rebate); 
       printf("��ۺ���֧���Ľ��:%f\n",m);
       return 0;
}