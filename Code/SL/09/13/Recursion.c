#include<stdio.h>

void DisplayNames(char** cNameArray);	/*��������*/

char* cNames[]=	    	/*�����ַ�������*/
{
	"Aaron",		/*Ϊ�ַ������и�ֵ*/
	"Jim",
	"Charles",
	"Sam",
	"Ken",
	"end"			/*�趨������־*/
};

int main()
{
	DisplayNames(cNames);		/*���õݹ麯��*/
	return 0;
}

void DisplayNames(char** cNameArray)
{
	if(*cNameArray=="end")	/*�жϽ�����־*/
	{
		return ;			/*������������*/
	}
	else
	{
		DisplayNames(cNameArray+1);		/*���õݹ麯��*/
		printf("%s\n",*cNameArray);		/*����ַ���*/
	}
}