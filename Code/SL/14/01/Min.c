#include<stdio.h>/*����ͷ�ļ�*/
#define MIX(a,b)   (a<b?a:b)						/*�궨�����������Ļ������*/
int main()/*������main*/
{
	int x=15,y=9;/*�������*/
	printf("x,yΪ:\n");/*��ʾ���*/
	printf("%d,%d\n",x,y);/*��ʾ���*/
	printf("the min number is:%d\n",MIX(x,y)); 				/*�궨�����*/
    return 0;/*�������*/
}
