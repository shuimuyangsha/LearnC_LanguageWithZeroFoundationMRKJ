#include<stdio.h>
int main()
{
    int x,y,z;                                /*�������xΪ���̣�yΪ��ĸ��zΪ����*/
    
     for(x=0;x<20;x++)                        /*��������20������*/
         for(y=0;y<33;y++)                    /*��������33����ĸ*/
         {
            z=100-x-y;
            if(5*x+3*y+z/3.0==100)
                printf("����=%d,��ĸ=%d,����=%d\n",x,y,z);
         }
         
      return 0;
}