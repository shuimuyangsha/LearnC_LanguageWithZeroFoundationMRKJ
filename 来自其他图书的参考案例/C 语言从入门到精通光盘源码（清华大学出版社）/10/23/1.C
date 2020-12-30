#include<stdio.h>
main()
{
	int i,t,a[10];
	printf("please input:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\nthe array is:\n");
		for(i=0;i<10;i++)
		{
			if(i%5==0)
				printf("\n");
			printf("%5d",a[i]);
		}
		for(i=0;i<5;i++)
		{
			t=a[i];
			a[i]=a[9-i];
			a[9-i]=t;
		}
		printf("Now the array is:\n");
		for(i=0;i<10;i++)
		{
			if(i%5==0)
				printf("\n");
			printf("%5d",a[i]);
		}
}
