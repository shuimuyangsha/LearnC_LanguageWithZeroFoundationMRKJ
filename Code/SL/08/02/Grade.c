#include<stdio.h>                                           /*����ͷ�ļ�*/
void main()                                                 /*������main*/
{
    int grade[10]={95,85,45,78,68,91,90,55,48,80};       /*����ѧ���ɼ�*/
    int total=0;                                            /*����������������ܳɼ�*/
    int i;
    float avg;                                              /*���������������ƽ���ɼ�*/
    for(i=0;i<10;i++)
    {
        total+=grade[i];                                    /*�����ܳɼ�*/
    }
    avg=((float)total/10);                                 /*����ƽ���ɼ�*/
    printf("the student's averge score is %f\n",avg); /*��ʾ���ƽ���ɼ�*/
 }
