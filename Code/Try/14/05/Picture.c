#include<stdio.h>
#define TEM 235 
int main()
{
	 
    #if TEM==235
         printf("清纯型\n");		
    #elif TEM==399 							
       printf("异域风情\n");
       #elif TEM==599
       printf("双人照（姐妹照，情侣照）\n");
       #elif TEM==1999 
       printf("婚纱照\n");
    #else
         printf("没有这样的类型\n");			
    #endif
    return 0;
}
