#include<stdio.h>
#define STR "100号"
int main()
{
    #ifdef STR          //取到号码
        printf(STR);
        printf("能办理业务\n");
    #endif
    printf("\n");
    #ifndef ABC         //没取号码
        printf("不能办理业务\n");
    #endif
        return 0;
}
