#include<stdio.h>
int main()
{
    
    int  width=2,length=4,num;
    float f=1.5f;
    num= (int)(width/f) * (int)(length/f);        
    printf("载货区一层可以放%d个箱子\n",num);              
    return 0;                                   
}