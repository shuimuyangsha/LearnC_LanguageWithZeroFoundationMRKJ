#include<stdio.h>
int main()
{
    int num1,num2;                                     /*�������num1��ʾѡ�����Ļ����̵����ӣ�num2��ʾ����ļ۸�*/
    printf("����1��ʾ�����ӣ��������������\n");
    scanf("%d,%d",&num1,&num2);                        /*����Ŀ�ζ��ѡ���Ǯ��*/
    if(num1==1)                                        /*�ж�ѡ��ʲô��ζ*/
    {
     if(num2>=5&&num2<10)                              /*�������������ѡ��������Ʒ*/                                        
         printf("�����ԳԵ�5Ԫ��������\n");
     else if(num2>=10)
         printf("�����ԳԵ�10Ԫ��������\n");
     else 
         printf("�������ԳԵ�������\n"); 
    }
      else
      {
        if(num2>=4&&num2<12)
         printf("�����ԳԵ�4Ԫ��������\n");
         else if(num2>=12)
         printf("�����ԳԵ�12Ԫ��������\n");
        else 
         printf("�������ԳԵ�������\n");
      }
      return 0;
}