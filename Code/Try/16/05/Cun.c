#include<stdio.h>
#include <stdlib.h>

int main()
{

	char *p;	 
	p=(char*)malloc(100); 
    if(p)
        printf("malloc�����ڴ棺%x\n",p);
    else
        printf("NO\n");
   
    p=(char*)realloc(p,256);
    if(p)
        printf("realloc�����ڴ棺%x\n",p);
    else 
        printf("NO\n");
    free(p);
	return 0;
}