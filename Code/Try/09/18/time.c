#include<stdio.h>
#include<math.h>
int main()
{
    int a[5]={5,10,15,20,25};					
	int i,j;
    int differ,ab;
    printf("������������վ��\n");
    scanf("%d,%d",&i,&j);
     
   
    differ=a[i]-a[i-j];
    ab=abs(differ);
    printf("��վ֮���г���Ҫ%d����\n",ab);
 
     
	return 0;
}