#include<stdio.h>

int main()
{
	char* ArrayName[5];		/*�ַ�ָ������*/
	int index;				/*ѭ�����Ʊ���*/
	ArrayName[0]="WangJiasheng";	/*Ϊ����Ԫ�ظ�ֵ*/
	ArrayName[1]="LiuWen";
	ArrayName[2]="SuYuqun";
	ArrayName[3]="LeiYu";
	ArrayName[4]="ZhangMeng";
	for(index=0;index<5;index++)	/*ʹ��ѭ����ʾ����*/
	{
		printf("%s\n",ArrayName[index]);
	}
	
	return 0;
}