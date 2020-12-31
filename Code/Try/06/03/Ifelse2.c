#include<stdio.h>
int main()
{
    float iHeight,iStrong;                                              /*定义变量*/
    double bmi;
    printf("请输入身高、体重：");
    scanf("%f,%f",&iHeight,&iStrong);                                       
    bmi= iStrong/(iHeight*iHeight) ;                           /*计算BMI值*/
    printf("BMI=%f\n",bmi);
    if(bmi<18.5)                                            /*判断输入BMI的值*/
        printf("您的体重偏轻\n");  
    if(bmi>=18.5&&bmi<25)                                            
        printf("您的体重正常\n"); 
    if(bmi>=25&&bmi<30)                                            
        printf("您的体重偏重\n");
    if(bmi>=30)                                            
        printf("您的体重肥胖\n");
    return 0;
}