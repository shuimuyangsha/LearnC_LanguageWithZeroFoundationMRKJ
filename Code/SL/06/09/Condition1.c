#include<stdio.h>                                       /*����ͷ�ļ�*/
int main()                                              /*������main*/
{
    int jour,fee;                                       /*���������jour�ǹ�������fee����������*/
    printf("the mileage is taxi go:\n");                /*�Ƴ̳��ߵĹ�����*/
    scanf("%d",&jour);                                  /*���빫����*/
       fee=(jour<3)?6:6+(jour-3)*2;                     /*������������*/  
        printf("the costs of get a taxi is %d\n",fee);         /*��������ķ���*/
      return 0;                                         /*�������*/
}