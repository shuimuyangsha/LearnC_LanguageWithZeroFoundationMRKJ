#include <stdio.h>
int main()
{
    float Ffloat1,Ffloat2,Ffloat;       //定义Ffloat1为身高，Ffloat2为体重
    printf("请输入身高、体重：");
    scanf("%f %f",&Ffloat1,&Ffloat2);
    Ffloat=Ffloat2/(Ffloat1*Ffloat1);
    printf("您的身体质量指数（BMI）:%f\n",Ffloat);
    return 0;
}