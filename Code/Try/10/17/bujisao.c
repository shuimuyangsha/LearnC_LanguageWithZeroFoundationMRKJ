#include<stdio.h>
void order(int *x,int n)
{
	int i,j,t,temp;
	for(i=0;i<n-1;i++)
	{
        t=i;
	    for(j=i+1;j<n;j++)
        {
        if(*(x+t)>*(x+j))
        {
           t=j;
        }
        temp=*(x+i);
        *(x+i)=*(x+t);
        *(x+t)=temp;
        
        }
    }    

}
int main()
{
	int x[10],i,*p=x; 										/*输入数组元素的个数*/
	printf("请输入各个元素:\n");
	for(i=0;i<10;i++)
	scanf("%d",p++); 
    printf("\n"); 
    p=x;
	order(p,10); 
    printf("排序后的数组:");
	for(i=0;i<10;i++)
	printf("%5d",*(x+i)); 					 
	printf("\n");
    return 0; 
}
