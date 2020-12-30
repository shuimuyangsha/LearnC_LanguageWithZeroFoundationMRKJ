#include<stdio.h>
main()
{
	int a[10],*p1,**p2,i,n=0;								/*定义数组、指针、变量等为基本整型*/
	printf("please input:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 							/*给数组a中各元素赋值*/
	p1=a;									/*将数组a的首地址赋给p1*/
	p2=&p1; 										/*将指针p1的地址赋给p2*/
	printf("the array is:");
	for(i=0;i<10;i++)
	{
		if(*(*p2+i)%2==0)
		{
			printf("%5d",*(*p2+i));						/*输出数组中的元素*/
			n++;
		}
	}
	printf("\n");
	printf("the number is:%d\n",n);
}
