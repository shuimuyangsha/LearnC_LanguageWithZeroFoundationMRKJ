#include <stdlib.h>
#include<stdio.h>

int main()
{
	char *pInt;		/*定义指针*/
	pInt=(char*)malloc(sizeof(char));	/*分配内存*/

	*pInt=65;		/*使用分配内存*/
	printf("the graph is:%c\n",*pInt);	/*输出显示图形*/
	free(pInt);		/*释放内存*/
	return 0;		
}