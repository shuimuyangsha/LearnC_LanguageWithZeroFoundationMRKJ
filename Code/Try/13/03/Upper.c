#include<stdio.h>
int main()
{
    unsigned result; 									/*�����޷��ű���*/
    char cChar;
    printf("�������ַ�cChar:\n");
    scanf("%c",&cChar);
    printf("cChar��ASCIIֵΪ��%d", cChar);
    result = ~cChar; 									/*��cChar�ķ�*/
    printf("\ncChar��ASCIIֵȡ��Ϊ��%d\n", result);
    return 0;
}
