#include<stdio.h>

int main()
{
	int iNumber1,iNumber2;			/*定义变量*/
	
	printf("please enter two numbers:\n");	/*信息提示*/	
	scanf("%d%d",&iNumber1,&iNumber2);		/*输入数据*/	
	if(iNumber1>iNumber2)	/*判断iNumber1是否大于iNumber2*/
	{
		printf("the bigger number is %d\n",iNumber1);
	}
	else/*判断结果为假，则执行下面语句*/
	{
		printf("the bigger number is %d\n",iNumber2);
	}
	return 0;
}