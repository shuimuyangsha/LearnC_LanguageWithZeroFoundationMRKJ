#include<stdio.h>
int main()
{
    int i, j, k; 								 /*�������i,j,kΪ��������*/
    for (i = 1; i <= 5; i++)					 /*��������*/
    {
        for (j = 1; j <= 5-i; j++)				 /*���ƿո���*/
            printf(" ");
        for (k = 1; k <= 2 *i - 1; k++)			 /*���ƴ�ӡ#�ŵ�����*/
            printf("*");
        printf("\n");
    }
	return 0;
}
