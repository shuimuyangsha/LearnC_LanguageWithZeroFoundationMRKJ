#include<stdio.h>
#define STR "Believe youself\n"
int main()
{
    #ifdef STR
        printf(STR);
    #else
        printf("**Don't give up**\n");
    #endif
    printf("\n");
    #ifndef ABC
        printf("Don't give up\n");
    #else
        printf(STR);
    #endif
        return 0;
}
