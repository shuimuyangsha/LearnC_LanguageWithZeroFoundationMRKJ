#include<stdio.h>

struct Product				/*声明结构*/
{
	char cName[10];			/*产品的名称*/
	char cShape[20];		/*形状*/
	char cColor[10];		/*颜色*/
	int	 iPrice;			/*价格*/
	char cArea[20];			/*产地*/
};			

int main()
{
	struct Product product1;			/*定义结构体变量*/

	printf("please enter product's name\n");	/*信息提示*/
	scanf("%s",&product1.cName);	/*输出结构成员*/

	printf("please enter product's shape\n");/*信息提示*/
	scanf("%s",&product1.cShape);	/*输出结构成员*/

	printf("please enter product's color\n");/*信息提示*/
	scanf("%s",&product1.cColor);	/*输出结构成员*/

	printf("please enter product's price\n");/*信息提示*/
	scanf("%d",&product1.iPrice);	/*输出结构成员*/

	printf("please enter product's area\n");/*信息提示*/
	scanf("%s",&product1.cArea);	/*输出结构成员*/

	printf("Name: %s\n",product1.cName);	/*将成员变量输出*/
	printf("Shape: %s\n",product1.cShape);
	printf("Color: %s\n",product1.cColor);	
	printf("Price: %d\n",product1.iPrice);
	printf("Area: %s\n",product1.cArea);

	return 0;
}