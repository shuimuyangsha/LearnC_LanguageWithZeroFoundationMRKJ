#include <stdio.h>
main()
{
    FILE *fp;						/*定义一个指向FILE类型结构体的指针变量*/
    char ch;						/*定义变量及数组为字符型*/
    fp = fopen("e:\\exp02.txt", "r");		/*以只读方式打开指定文件*/
    ch = fgetc(fp);					/*fgetc函数带回一个字符赋给ch*/
    while (ch != EOF)				/*当读入的字符值等于EOF时结束循环*/
    {
        putchar(ch);				/*将读入的字符输出在屏幕上*/
        ch = fgetc(fp);				/*fgetc函数继续带回一个字符赋给ch*/
    }
    fclose(fp);						/*关闭文件*/
}
