#include<stdio.h>
int main()
{
    int iArray[11], index;				/*定义数组及变量为基本整型*/
    printf("请输入手机号:\n");

    for (index= 0; index< 11; index++)		/*逐个输入数组元素*/
	{
		scanf("%d",&iArray[index]);				
	}
    printf("手机号是:\n");
    for (index = 0; index< 11; index++)			/*显示数组中的元素*/
	{
		printf("%d ", iArray[index]);
	}
    printf("\n");
	return 0;
}
