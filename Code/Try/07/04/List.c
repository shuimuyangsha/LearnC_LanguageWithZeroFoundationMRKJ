#include<stdio.h>
int main()
{
    int n,i;                                /*定义变量*/
    int arr[100]={1,1};                      
     scanf("%d",&n);                 
     for(i=2;i<n+2;i++)
         arr[i]=arr[i-1]+arr[i-2];
         printf("arr[%d]=%d\n",n,arr[n-1]);
      return 0;
}