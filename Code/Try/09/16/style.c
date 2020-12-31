#include<stdio.h>

int main()			 
{
	char *style="风景";			 
	printf("%s\n",style);		 

	if(style="风景")
	{
		char *style="蓝天白云";		 
		printf("%s\n",style); 

		if(style="风景")
		{
			char *style="奇幻梦境";	 
			printf("%s\n",style); 
		}
		 
	}

	return 0;
}