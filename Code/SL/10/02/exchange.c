#include<stdio.h>/*����ͷ�ļ�*/
void swap(int *a,int *b)/*�Զ��彻������*/
{
    int t=*a;/*ʵ����������*/
    *a=*b;
    *b=t;
}
int main()/*������main*/
{
    int x=1,y=9;/*�����������ʼ��*/
    swap(&x,&y);/*���ú�������ֵ*/
    printf("���������ǣ�x=%d,y=%d\n",x,y);/*����������ֵ*/
    return 0;/*�������*/

}