#include <stdio.h>
#include<process.h>
struct score_list											/*定义结构体存储学生成绩信息*/
{
    char name[10];
    int math;
    int Chinese;
    int English;
} score[100];
void save(char *name, int n)									/*自定义函数save*/
{
    FILE *fp;										/*定义一个指向FILE类型结构体的指针变量*/
    int i;
    if ((fp = fopen(name, "wb")) == NULL)						/*以只写方式打开指定文件*/
    {
        printf("cannot open file\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
        if (fwrite(&score[i], sizeof(struct score_list), 1, fp) != 1)		/*将一组数据输出到fp所指的文件中*/
            printf("file write error\n");							/*如果写入文件不成功，则输出错误*/
    fclose(fp);												/*关闭文件*/
}
main()
{
    int i, n;									/*变量类型为基本整型*/
    char filename[50];							/*数组为字符型*/
    printf("how many ?\n");
    scanf("%d", &n);								/*输入学生数*/
    printf("please input filename:\n");
    scanf("%s", filename);							/*输入文件所在路径及名称*/
    printf("please input name,math,Chinese,English:\n");
    for (i = 0; i < n; i++)							/*输入学生成绩信息*/
    {
        printf("NO%d", i + 1);
        scanf("%s%d%d%d", score[i].name, &score[i].math,&score[i].Chinese,&score[i].English);
        save(filename, n);							/*调用函数save*/
    }
}
