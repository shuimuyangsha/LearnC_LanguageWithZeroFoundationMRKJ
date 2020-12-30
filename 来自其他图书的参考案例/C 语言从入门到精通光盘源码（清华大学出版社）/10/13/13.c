#include<stdio.h>
main()
{
	int i;
	char **p;
	char *month[]=
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
	};													/*给指针数组中的元素赋初值*/
	for(i=0;i<12;i++)
	{
		p=month+i;  
		printf("%s\n",*p); 	/*输出指针数组中的各元素*/
	}
}
