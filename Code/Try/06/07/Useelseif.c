#include<stdio.h>
int main()
{
    int score;                                             /*定义变量*/
    scanf("%d",&score);                                   /*输入成绩*/
    if(score>=90)                                         /*判断输入成绩等级*/
        printf("优秀\n"); 
    else if(score>=80&&score<90)                                        
        printf("良好\n");
    else if(score>=60)                                      
        printf("合格\n");
    else
        printf("不合格\n");
      return 0;
}