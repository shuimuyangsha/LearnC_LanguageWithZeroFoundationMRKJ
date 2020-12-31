#include <stdio.h>
int main()
{
    FILE *fp;					 
    char ch;					 
    fp = fopen("e:\\my02.txt", "r");		 
    ch = fgetc(fp);				 
    while (ch != EOF)			 
    {
        putchar(ch);				 
        ch = fgetc(fp);				 
    }
    fclose(fp);						 
    return 0;
}
