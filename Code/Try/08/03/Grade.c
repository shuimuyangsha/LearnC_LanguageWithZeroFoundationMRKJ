#include<stdio.h>
 void main()
{
    							 
    int grade[4]={67,80,74};              /*����ɼ�*/
    int total=0;                          /*����������������ܳɼ�*/
    int i;
    float avg;                            /*���������������ƽ���ɼ�*/
    for(i=0;i<4;i++)
    {
        total+=grade[i];                  /*�����ܳɼ�*/
    }
    avg=((float)total/4);               /*����ƽ���ɼ�*/
    printf("ƽ���ɼ��ǣ�%f\n",avg);
    
}
