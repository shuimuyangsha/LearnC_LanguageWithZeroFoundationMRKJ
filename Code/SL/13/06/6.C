#include<stdio.h>
void main()
{
	int x=30,y=-30;
	x=x>>3; 									/*x����3λ*/
	y=y>>3; 									/*y����3λ*/
	printf("the result1 is:%d,%d\n",x,y);
	x=x>>2; 									/*x����2λ*/
	y=y>>2; 									/*x����2λ*/
	printf("the result2 is:%d,%d\n",x,y);
}
