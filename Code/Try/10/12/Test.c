#include<stdio.h>
int main()
{
	int i;
	char *test[]=
	{"Chinese","math","English","chemistry","biology","physics"};								/*��ָ�������е�Ԫ�ظ���ֵ*/
	printf("����:\n");
    for(i=0;i<6;i++)
		printf("%s\n",test[i]); 								/*���ָ�������еĸ�Ԫ��*/
    return 0;
}

