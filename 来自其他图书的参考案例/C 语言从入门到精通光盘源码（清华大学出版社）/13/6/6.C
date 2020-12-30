#include<stdio.h>
#define STR "diligence is the parent of success\n"
main()
{
    #ifdef STR
        printf(STR);
    #else
        printf("idleness is the root of all evil\n");
    #endif
    printf("\n");
    #ifndef ABC
        printf("idleness is the root of all evil\n");
    #else
        printf(STR);
    #endif
}
