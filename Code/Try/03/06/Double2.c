#include<stdio.h>
void main()
{
    double d,h,v,res;                 //定义双精度类型变量
     d=10;                 //对变量进行赋值
     h=3;
     v=3.14*(d/2)*(d/2);
     printf("该粮仓体积为%f立方米\n",v);     //显示结果
     res=750*v;
     printf("该粮仓一共可储存%f千克粮食\n",res);  
}