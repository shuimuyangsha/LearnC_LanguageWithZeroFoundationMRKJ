#include<stdio.h>
int main()
{
    int x,y,z;                                /*定义变量x为鸡翁，y为鸡母，z为鸡雏*/
    
     for(x=0;x<20;x++)                        /*最多可以买20个鸡翁*/
         for(y=0;y<33;y++)                    /*最多可以买33个鸡母*/
         {
            z=100-x-y;
            if(5*x+3*y+z/3.0==100)
                printf("鸡翁=%d,鸡母=%d,鸡雏=%d\n",x,y,z);
         }
         
      return 0;
}