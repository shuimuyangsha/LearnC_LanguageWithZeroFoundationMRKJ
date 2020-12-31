#include<stdio.h>
int main()
{
	long x=1500630L;
	x=x>>64; 									/*x”““∆64Œª*/								
	printf("the result1 is:%ld\n",x);
	x=x>>65; 									/*x”““∆65Œª*/
	printf("the result2 is:%ld\n",x);
    x=x>>1; 									/*x”““∆1Œª*/
	printf("the result3 is:%ld\n",x);
    return 0;
}
