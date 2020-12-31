#include<stdio.h>
void swap(int *p1, int *p2) 								/*自定义交换函数*/
{
    int temp;
    temp =  *p1;
    *p1 =  *p2;
    *p2 = temp;
}
void exchange(int *pt1, int *pt2, int *pt3) 						/*三个数由大到小排序*/
{
    if (*pt1 <  *pt2)
        swap(pt1, pt2); 								/*调用swap函数*/
    if (*pt1 <  *pt3)
        swap(pt1, pt3);
    if (*pt2 <  *pt3)
        swap(pt2, pt3);
}
void main()
{
    int a, b, c,  *q1,  *q2,  *q3;
    puts("Please input three key numbers you want to rank:");
    scanf("%d,%d,%d", &a, &b, &c);
    q1 = &a; 								/*将变量a地址赋给指针变量q1*/
    q2 = &b;
    q3 = &c;
    exchange(q1, q2, q3); 					/*调用exchange函数*/
    printf("\n%d,%d,%d\n", a, b, c);
}
