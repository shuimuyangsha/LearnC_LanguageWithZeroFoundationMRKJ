#include<stdio.h>

int main()
{
    int iArray[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, index;	/*定义数组及变量为基本整型*/
    int iArray1[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}, index1;/*定义数组及变量为基本整型*/
    printf("体育老师按高矮身材排队编号，老师排好编号是:\n");
   
    for (index = 0; index< 20; index++)		                                	/*显示编号*/
	{
		printf("%d ", iArray[index]);
	}
    printf("\n");
    printf("重新排列他后面同学的编号是:\n");
  
    for (index1 = 7; index1< 21; index1++)			                                /*显示编号*/
	{
		printf("%d ", iArray1[index1]);
	}
    printf("\n");
	return 0;
}
