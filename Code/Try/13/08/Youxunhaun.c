#include <stdio.h>
right(unsigned value, int n)									/*�Զ������ƺ���*/
{
    unsigned z;
    z = (value << (32-n)) | (value >> n);						/*ѭ�����Ƶ�ʵ�ֹ���*/
    return z;
} 
int main()
{
    unsigned a;
    int n;
    printf("�����Լ����:\n");
    scanf("%d", &a);										/*����һ���˽�����*/
    printf("����Ҫ��λ��λ��:\n");
    scanf("%d", &n);									/*����Ҫ��λ��λ��*/
    printf("the result is %o\n", right(a, n));					/*�����ƺ�Ľ�����*/
    return 0;
}
