#include<stdio.h>
int main()
{
   
    int a=10,b=11;
    int *ipointer1,*ipointer2;				/*声明两个指针变量*/
    ipointer1 = &a;				
    ipointer2=&b;
     if(a>b)
        printf("a的值大\n");
    else
        printf("b的值大\n");
    
    return 0;

}