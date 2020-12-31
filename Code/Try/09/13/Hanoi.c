#include <stdio.h>
long lCount;
void move(int n,char x,char y,char z)		//½«n¸öÔ²ÅÌ´ÓxÕë½èÖúyÕëÒÆµ½zÕëÉÏ
{
	if(n==1)
	 
    printf("Times:%d%c->%c\n",++lCount,x,z);
	else
	{
		move(n-1,x,z,y);
		printf("Times:%d%c->%c\n",++lCount,x,z);
		move(n-1,y,x,z);
	}
}
void main()
{
	int n ;
	lCount=0;
    printf("please input a number\n");
    scanf("%d",&n);
	move(n,'a','b','c');
}
