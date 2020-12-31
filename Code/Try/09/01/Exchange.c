#include<stdio.h>

void exchange(int a,int b);	/*声明函数*/
int main()
{
    int a=3,b=4;
	exchange(a,b);		/*执行函数*/
	return 0;
}
void exchange(int a,int b)
{
	int c;
    c=a;
    a=b;
    b=c;
    printf("交换后的值a=%d,b=%d\n",a,b);
    
}
