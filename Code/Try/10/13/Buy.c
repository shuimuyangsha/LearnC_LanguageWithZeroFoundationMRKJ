#include<stdio.h>
int main()
{
	int i;
	char **p;
	char *month[]=
	{"559"};													/*��ָ�������е�Ԫ�ظ���ֵ*/
    printf("�·��ļ۸��ǣ�\n");
	for(i=0;i<1;i++)
	{
		p=month+i;  
		printf("%s\n",*p); 	/*���ָ�������еĸ�Ԫ��*/
        
	}
    return 0;
}
