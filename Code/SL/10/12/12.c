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
	};													/*��ָ�������е�Ԫ�ظ���ֵ*/
	for(i=0;i<12;i++)
		printf("%s\n",month[i]); 								/*���ָ�������еĸ�Ԫ��*/
}
