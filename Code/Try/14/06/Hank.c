#include<stdio.h>
#define STR "100��"
int main()
{
    #ifdef STR          //ȡ������
        printf(STR);
        printf("�ܰ���ҵ��\n");
    #endif
    printf("\n");
    #ifndef ABC         //ûȡ����
        printf("���ܰ���ҵ��\n");
    #endif
        return 0;
}
