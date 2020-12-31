#include<stdio.h>
void SUM(int *p,int n) 							 
{
	int i,sum=0;
	for(i=0;i<n;i++)
			sum=sum+*(p+i);
		printf("新生总人数是:%d\n",sum);
}
int main()
{
	int *pointer,a[10],i;
	pointer=a; 									 
	printf(" 请输入每个班级人数:\n");	
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	SUM(pointer,10);  
    return 0;
}
