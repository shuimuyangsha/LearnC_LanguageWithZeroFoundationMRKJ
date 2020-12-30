#include<stdio.h>

int main()
{
	int iChinese,iEnglish;			/*定义两个变量，用来保存分数*/
	printf("Enter Chinese score:");	/*提示信息*/
	scanf("%d",&iChinese);			/*输入分数*/
	printf("Enter English score:");	/*提示信息*/
	scanf("%d",&iEnglish);			/*输入分数*/
	

	if(iChinese>iEnglish)		/*使用关系表达式进行判断*/
	{
		printf("Chinese is better than English\n");
	}
	if(iChinese<iEnglish)		/*使用关系表达式进行判断*/
	{
		printf("English is better than Chinese\n");
	}
	if(iChinese==iEnglish)		/*使用关系表达式进行判断*/
	{
		printf("Chinese equal English\n");
	}

	return 0;
}

