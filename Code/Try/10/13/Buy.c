#include<stdio.h>
int main()
{
	int i;
	char **p;
	char *month[]=
	{"559"};													/*给指针数组中的元素赋初值*/
    printf("衣服的价格是：\n");
	for(i=0;i<1;i++)
	{
		p=month+i;  
		printf("%s\n",*p); 	/*输出指针数组中的各元素*/
        
	}
    return 0;
}
