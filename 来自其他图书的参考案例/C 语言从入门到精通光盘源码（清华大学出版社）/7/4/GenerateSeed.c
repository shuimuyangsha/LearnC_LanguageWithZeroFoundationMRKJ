#include<stdio.h>
#include<stdlib.h>
int main()
{
	int counter;		/*�������*/
	/*ʹ��for��䣬Ϊ������ֵ��ִ��ѭ��*/
	for(counter=0;counter<10;counter++)
	{
		srand(counter+1);		/*�����漴������������*/
		printf("Random number %d is: %d\n",counter,rand());/*�������������*/
	}
	return 0;
}