#include<stdio.h>
int main()
{
    float iHeight,iStrong;                                              /*�������*/
    double bmi;
    printf("��������ߡ����أ�");
    scanf("%f,%f",&iHeight,&iStrong);                                       
    bmi= iStrong/(iHeight*iHeight) ;                           /*����BMIֵ*/
    printf("BMI=%f\n",bmi);
    if(bmi<18.5)                                            /*�ж�����BMI��ֵ*/
        printf("��������ƫ��\n");  
    if(bmi>=18.5&&bmi<25)                                            
        printf("������������\n"); 
    if(bmi>=25&&bmi<30)                                            
        printf("��������ƫ��\n");
    if(bmi>=30)                                            
        printf("�������ط���\n");
    return 0;
}