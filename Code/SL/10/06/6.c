#include<stdio.h>
void main()
{
	int *p,*q,a[5],b[5],i;
	p=&a[0];
	q=b;
	printf("please input array a:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);						/*为数组a中的元素赋初值*/
	printf("please input array b:\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]); 						/*为数组b中的元素赋初值*/
	printf("array a is:\n");
	for(i=0;i<5;i++)
		printf("%5d",*(p+i)); 						/*输出数组a中的元素*/
	printf("\n");
	printf("array b is:\n");
	for(i=0;i<5;i++)
		printf("%5d",*(q+i)); 						/*输出数组b中的元素*/
	printf("\n");
}
