#include<stdio.h>
int main()
{
    int a=10;
    int *ipointer1;				/*��������ָ�����*/
    ipointer1 = &a;				
    printf("����%d\n",*ipointer1);
    return 0;
}
