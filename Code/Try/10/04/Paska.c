#include<stdio.h>
int main()
{
    int a=1000*10*8*0.001;
    int *p;
	p=&a;
    printf("����ѹǿ��ʽ��\n");
	printf("ˮ�Ա��Ӳ���ѹǿ:%d Pa\n",*&a); 					/*���ѹǿ*/
    return 0;
}
	 
