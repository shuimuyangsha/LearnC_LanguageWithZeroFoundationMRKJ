#include<stdio.h>
int main()
{
    int i,j,a[6]={0,1},l,r;                                /*定义变量*/
    
     for(i=1;i<=5;i++)
     {
          l=0;
     
     for(j=1;j<=i;j++)
     {
      r=a[j];
      a[j]=l+r;
      l=r;
      printf("%3d",a[j]);
     }
     printf("\n");
     }
      return 0;
}