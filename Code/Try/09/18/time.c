#include<stdio.h>
#include<math.h>
int main()
{
    int a[5]={5,10,15,20,25};					
	int i,j;
    int differ,ab;
    printf("请任意输入两站：\n");
    scanf("%d,%d",&i,&j);
     
   
    differ=a[i]-a[i-j];
    ab=abs(differ);
    printf("两站之间行车需要%d分钟\n",ab);
 
     
	return 0;
}