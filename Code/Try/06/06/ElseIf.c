#include<stdio.h>
int main()
{
    int x,y;                                  /*�������x,y*/
    scanf("%d",&x);                          /*����x����*/
    if(x<1)                                  /*�ж�����x��ȡֵ��Χ*/
    {
        y=x;
        printf("y=%d\n",y);                   /*���y��ֵ*/
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