#include <stdio.h>
void swap(int *x1,int *x2)
{
    int t;
    t=*x1;
    *x1=*x2;
    *x2=t;
}
void order(int *a,int *b)
{
    if(*a>*b)
    swap(a,b);
}
int main()
{
 int x,y;
 printf(" ‰»Î÷µ:\n");
 scanf("%d,%d",&x,&y);
 printf("x=%d,y=%d\n",x,y);
 order(&x,&y);
 printf("x=%d,y=%d\n",x,y);
 return 0;
}