#include<stdio.h>
int main()
{
    int telephone=10086,num;                 /*����绰�û�*/
     if(telephone==10086)                   /*�ж��Ƿ�Ϊ�ƶ��û�*/
     {
         printf("��ã���ӭ�µ��й��ƶ�,�ͷ�Ϊ���ṩ���·���:��ѯ�����벦1���˹������벦0:\n");
         scanf("%d",&num);
       switch(num)                          /*������������ַ�ѡ��ҵ��*/
       {
       case 1:
          printf("���Ļ������Ϊ9.89Ԫ\n");
           break;
       case 0:
           printf("���ã���ӭʹ���ƶ��ͷ�ҵ��Ϊ�˱�֤ͨ������������ͨ�����ᱻ¼����лл������\n");
           break;
       default:
           printf("�Բ���ϵͳû�д�ҵ��\n");
       }
     }
     else
     {
        printf("��ʱ�޷��ṩ����");
     }
       return 0;
}