#include <stdio.h>
int main()
{
    float Ffloat1,Ffloat2,Ffloat;       //����Ffloat1Ϊ��ߣ�Ffloat2Ϊ����
    printf("��������ߡ����أ�");
    scanf("%f %f",&Ffloat1,&Ffloat2);
    Ffloat=Ffloat2/(Ffloat1*Ffloat1);
    printf("������������ָ����BMI��:%f\n",Ffloat);
    return 0;
}