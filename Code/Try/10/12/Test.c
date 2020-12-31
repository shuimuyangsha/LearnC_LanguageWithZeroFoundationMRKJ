#include<stdio.h>
int main()
{
	int i;
	char *test[]=
	{"Chinese","math","English","chemistry","biology","physics"};								/*给指针数组中的元素赋初值*/
	printf("答案是:\n");
    for(i=0;i<6;i++)
		printf("%s\n",test[i]); 								/*输出指针数组中的各元素*/
    return 0;
}

