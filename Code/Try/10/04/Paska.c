#include<stdio.h>
int main()
{
    int a=1000*10*8*0.001;
    int *p;
	p=&a;
    printf("根据压强公式：\n");
	printf("水对杯子产生压强:%d Pa\n",*&a); 					/*输出压强*/
    return 0;
}
	 
