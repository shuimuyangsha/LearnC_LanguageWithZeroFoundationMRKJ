#include<stdio.h>
 void main()
{
    							 
    int grade[10]={12,5,21,15,32,10,25,14,30,20};/*����ѧ���ɼ�*/
    int total=0;                                  /*����������������ܳɼ�*/
    int i;
    float avg;                                     /*���������������ƽ���ɼ�*/
    for(i=0;i<10;i++)
    {
        total+=grade[i];                            /*�����ܳɼ�*/
    }
    avg=((float)total/10);                          /*����ƽ���ɼ�*/
    printf("���������ƽ���ɼ��ǣ�%f\n",avg);
    
}
