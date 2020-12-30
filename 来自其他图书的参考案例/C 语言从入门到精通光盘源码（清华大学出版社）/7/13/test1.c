#include<stdio.h>

int main()

{
	int i;
	for(i=0;i<26;i=i+2)
		
	{
		printf("字母 %c 对应的ASCII码为 %d  │  ",i+65,i+65);
		
        printf("字母 %c 对应的ASCII码为 %d \n",i+66,i+66);
	}
}