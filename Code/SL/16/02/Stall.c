#include<stdio.h>

void DisplayB(char* string)		/*����B*/
{
	printf("%s\n",string);
}

void DisplayA(char* string)		/*����A*/
{
	char String[20]="LoveWorld!";
	printf("%s\n",string);
	DisplayB(String);			/*���ú���B*/
}

int main()
{
	char String[20]="LoveChina!";	
	DisplayA(String);		/*���������뺯��A��*/
	return 0;
}