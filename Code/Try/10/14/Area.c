#include <stdio.h>
void area(int *a,int *b,int *c)
{
    int x=5,y=3,k=4;
    int s,d,m;
    a=&x;
	b=&y;
    c=&k;
    
	s=x*y;
    d=x*k;
    m=y*k;
    printf("正面面积是：%d\n",d);
    printf("侧面面积是：%d\n",m);
    printf("顶面面积是：%d\n",s);
	
}
int main()
{
	
	int *p_x,*p_y,*p_k;
    int x,y,k;
    p_x=&x;
	p_y=&y;
    p_k=&k;
	area(p_x,p_y,p_k);
    return 0;
}
