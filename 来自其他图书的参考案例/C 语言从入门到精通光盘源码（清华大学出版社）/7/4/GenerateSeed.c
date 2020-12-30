#include<stdio.h>
#include<stdlib.h>
int main()
{
	int counter;		/*定义变量*/
	/*使用for语句，为变量赋值，执行循环*/
	for(counter=0;counter<10;counter++)
	{
		srand(counter+1);		/*设置随即发生数的种子*/
		printf("Random number %d is: %d\n",counter,rand());/*产生随机发生数*/
	}
	return 0;
}