#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue[N];
int rear;
int front;
void enqueue(int value)
{
	if((rear+1)%N==front)
	{
		printf("The queue is full.\n");
		return;
	}
	else
	{		
		queue[rear]=value;
		rear=(rear+1)%N;
	}
}
int dequeue(void)
{
	int value;
	if(rear==front)
		return -1;
	else
	{
		value=queue[front];
		queue[front]=0;
		front=(front+1)%N;		
		return value;	
	}
}
void display()
{
	int i;
	for(i=0;i<N;i++)
		printf("%4d",queue[i]);
	printf("\n");
}
int main()
{
	printf("1    进队\n");
	printf("2    出对\n");
	printf("3    Exit\n");	
	int select,value;
	while(1)
	{
		printf("\nplease choose your select:\n");
		scanf("%d",&select);
		switch(select)
		{
			case 1:printf("value=?");
					scanf("%d",&value);
					enqueue(value);
					display();
					break;
			case 2:	if(dequeue()==-1)
						printf("The queue is empty.\n");
					else display();
					break;
			case 3:exit(0);
		}
	}
}
