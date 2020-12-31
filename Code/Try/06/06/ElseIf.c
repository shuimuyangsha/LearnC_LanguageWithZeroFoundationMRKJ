#include<stdio.h>
int main()
{
    int x,y;                                  /*定义变量x,y*/
    scanf("%d",&x);                          /*输入x的数*/
    if(x<1)                                  /*判断输入x数取值范围*/
    {
        y=x;
        printf("y=%d\n",y);                   /*输出y的值*/
    }
    else if(x>=1&&x<10)                                        
    {
        y=2*x-1;
        printf("y=%d\n",y);
    }
    else                                       
    {
        y=3*x-11;
        printf("y=%d\n",y);
    }
      return 0;
}