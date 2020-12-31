#include <stdio.h>                  /*包含头文件*/
int main()                          /*主函数main*/
{
    int graNum,graSum,num;          /*graNum为每头牛吃草的数量，graSum为总的草的数量，num为结果*/
    graNum=2,graSum=45;             /*为变量赋值*/
    num=graSum/graNum;              /*利用表达式计算结果*/
    printf("%d cows eat enought\n",num);/*将结果输出*/
    return 0;                       /*程序结束*/
}
