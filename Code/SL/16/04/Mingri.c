#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char* ch;	 
	ch=(char*)calloc(30,sizeof(char));	 
    strcpy(ch,"Mingrisoft");
    printf("%s\n",ch);
    free(ch);
	return 0;
}