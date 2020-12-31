#include <stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;										/*定义一个指向FILE类型结构体的指针变量*/
    char ch;										/*定义变量为字符型*/
    if ((fp = fopen("E:\\exp01.txt", "w")) == NULL)			/*以只写方式打开指定文件*/
    {
        printf("cannot open file\n");
        exit(0);
    }
    ch = getchar();									/*fgetc函数带回一个字符赋给ch*/
    while (ch != '#')									/*当输入"#"时结束循环*/
    {
        fputc(ch, fp);								/*将读入的字符写到磁盘文件上去*/
        ch = getchar();								/*fgetc函数继续带回一个字符赋给ch*/
    }
    fclose(fp);										/*关闭文件*/
}
