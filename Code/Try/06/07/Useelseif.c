#include<stdio.h>
int main()
{
    int score;                                             /*�������*/
    scanf("%d",&score);                                   /*����ɼ�*/
    if(score>=90)                                         /*�ж�����ɼ��ȼ�*/
        printf("����\n"); 
    else if(score>=80&&score<90)                                        
        printf("����\n");
    else if(score>=60)                                      
        printf("�ϸ�\n");
    else
        printf("���ϸ�\n");
      return 0;
}