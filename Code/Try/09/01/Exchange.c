#include<stdio.h>

void exchange(int a,int b);	/*��������*/
int main()
{
    int a=3,b=4;
	exchange(a,b);		/*ִ�к���*/
	return 0;
}
void exchange(int a,int b)
{
	int c;
    c=a;
    a=b;
    b=c;
    printf("�������ֵa=%d,b=%d\n",a,b);
    
}
