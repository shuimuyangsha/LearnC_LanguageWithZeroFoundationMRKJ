#include<stdio.h>

int Price=1000;	 
void pay(int number);

int main()
{
			 
    pay(99);
    pay(299);
    pay(199);
    printf("��������֮��Ǯ���л�ʣ%dԪǮ\n",Price);
	return 0;
}
 void pay(int number)
 {
    Price-=number;
    
 }