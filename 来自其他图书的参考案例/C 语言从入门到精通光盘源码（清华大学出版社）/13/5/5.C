#include<stdio.h>
#define NUM 50
main()
{
	int i=0;
    #if NUM>50
        i++;		
    #elif NUM==50							
        i=i+50; 	
    #else
        i--;			
    #endif
	printf("i is:%d\n",i);
}
