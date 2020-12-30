#include<stdio.h>
main()
{
	int x=30,y=-30;
	x=x>>3; 									/*x”““∆3Œª*/
	y=y>>3; 									/*y”““∆3Œª*/
	printf("the result1 is:%d,%d\n",x,y);
	x=x>>2; 									/*x”““∆2Œª*/
	y=y>>2; 									/*x”““∆2Œª*/
	printf("the result2 is:%d,%d\n",x,y);
}
