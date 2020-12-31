#include<stdio.h>

int Price=1000;	 
void pay(int number);

int main()
{
			 
    pay(99);
    pay(299);
    pay(199);
    printf("付款三次之后钱包中还剩%d元钱\n",Price);
	return 0;
}
 void pay(int number)
 {
    Price-=number;
    
 }