#include <stdio.h>
#include <string.h>
sort(char *strings[], int n)									/*自定义排序函数*/
{
	char *temp;
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(strings[i], strings[j]) > 0) 				/*比较两个字符串的大小*/
			{
				temp = strings[i];
				strings[i] = strings[j];
				strings[j] = temp; 						/*如果前面字符串比后面的大，则互换*/
			}
		}
	}
}
void main()
{
	int n = 12;
	int i;
	char **p; 											/*定义字符型指向指针的指针*/
	char *month[] =
	{
		"January", 
			"February", 
			"March", 
			"April", 
			"May", 
			"June", 
			"July", 
			"August", 
			"September", 
			"October", 
			"November", 
			"December" 
			
	};
	p = month;
	sort(p, n);											 /*调用排序函数*/
	printf("排序后的12月份如下：\n");
	for (i = 0; i < n; i++)
		printf("%s\n", month[i]); 							/*输出排序后的字符串*/
}
