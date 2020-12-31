#include <stdio.h>
#include <string.h>
void sort(char *strings[], int n)									 
{
	char *temp;
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(strings[i], strings[j]) > 0) 				 
			{
				temp = strings[i];
				strings[i] = strings[j];
				strings[j] = temp; 						 
			}
		}
	}
}
int main()
{
	int n = 8;
	int i;
	char **p; 											 
	char *name[] =
	{
		    "apple", 
			"tangerine", 
			"grapefriu", 
			"banana", 
			"orange", 
			"pineapple", 
			"grape", 
			"pitaia"	
	};
	p = name;
	sort(p, n);											 /*调用排序函数*/
	printf("排序后的水果单如下：\n");
	for (i = 0; i < n; i++)
		printf("%s\n", name[i]); 							/*输出排序后的字符串*/
    return 0;
}
