#include<stdio.h>
int main()
{
    unsigned result; 									/*定义无符号变量*/
    char cChar;
    printf("请输入字符cChar:\n");
    scanf("%c",&cChar);
    printf("cChar的ASCII值为：%d", cChar);
    result = ~cChar; 									/*求cChar的反*/
    printf("\ncChar的ASCII值取反为：%d\n", result);
    return 0;
}
