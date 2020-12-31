#include<stdio.h>
void main()
{
	int i;
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
		printf("%s\n",month[i]); 								/*输出指针数组中的各元素*/
}
