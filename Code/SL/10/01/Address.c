#include<stdio.h>/*����ͷ�ļ�*/
int main()/*������main*/
{
    int a;/*������������*/
    int *ipointer1;				/*����ָ�����*/
    printf("���������ݣ�\n");/*�����ʾ*/
    scanf("%d",&a);				/*������*/
    ipointer1 = &a;/*����ַ����ָ�����*/					
    printf("ת��ʮ������Ϊ��%x\n",*ipointer1);/*��16�������*/
    return 0;/*�������*/
}
