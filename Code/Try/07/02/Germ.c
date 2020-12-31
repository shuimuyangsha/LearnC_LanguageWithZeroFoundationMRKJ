#include<stdio.h>
#include <math.h>
int main()
{
    int x=1;                                 /*定义变量表示几代*/
    int num=1;                                /*定义变量表示菌落数*/
   while(x<=12)
     {
         num*=2;                     /*成倍数增长*/
         x++;
      }
     printf("第十二代菌落中的细菌数量是%d\n",num);
     
      return 0;
}