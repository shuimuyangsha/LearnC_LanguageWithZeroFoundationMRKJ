#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
}
void search(int a[],int n,int *max,int *min)
{
	int i;
	*max=*min=a[0];
	for(i=1;i<n;i++)
	{
		if(*max<a[i])
			*max=a[i];
		if(*min>a[i])
			*min=a[i];
	}
}
void sort(int a[],int n)
{
	int *p=a+1,*q,temp,i,j;
	for(;p<a+n;p++)
	{
		temp=*p;
		for(q=p-1;q-a>=0&&temp<*q;q--)
			*(q+1)=*q;
		*(q+1)=temp;
	}
	print(a,n);
}
void merge(int a[],int b[],int c[],int n)
{
	int *p=a,*q=b,*r=c;
	while(p<a+n&&q<b+n)
	{
		if(*p<*q)
		{
			*r=*p;
			p++;
		}
		else 
		{
			*r=*q;
			q++;
		}
		r++;
	}
	if(q==b+n)
		for(;p<a+n;p++)
		{
			*r=*p;
			r++;
		}
	if(p==a+n)
	{
		for(;q<b+n;q++)
		{
			*r=*q;
			r++;
		}
	}
	print(c,2*n);
}
int main()
{
	srand(time(0));
	int i,n,max,min;
	printf("n=?");
	scanf("%d",&n);
	int a[n],b[n],c[2*n];
	for(i=0;i<n;i++)
	{
		a[i]=100*rand()/RAND_MAX;
		b[i]=100*rand()/RAND_MAX;
	}
	print(a,n);
	print(b,n);
/*	search(a,n,&max,&min);
	printf("max=%d\n",max);
	printf("min=%d\n",min);*/
	printf("a:");
	sort(a,n);
	printf("b:");
	sort(b,n);
	printf("c:");
	merge(a,b,c,n);
	
}
