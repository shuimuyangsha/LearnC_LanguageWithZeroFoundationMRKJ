#include<stdio.h>

struct Product				/*�����ṹ*/
{
	char cName[10];			/*��Ʒ������*/
	char cShape[20];		/*��״*/
	char cColor[10];		/*��ɫ*/
	int	 iPrice;			/*�۸�*/
	char cArea[20];			/*����*/
};			

int main()
{
	struct Product product1;			/*����ṹ�����*/

	printf("please enter product's name\n");	/*��Ϣ��ʾ*/
	scanf("%s",&product1.cName);	/*����ṹ��Ա*/

	printf("please enter product's shape\n");/*��Ϣ��ʾ*/
	scanf("%s",&product1.cShape);	/*����ṹ��Ա*/

	printf("please enter product's color\n");/*��Ϣ��ʾ*/
	scanf("%s",&product1.cColor);	/*����ṹ��Ա*/

	printf("please enter product's price\n");/*��Ϣ��ʾ*/
	scanf("%d",&product1.iPrice);	/*����ṹ��Ա*/

	printf("please enter product's area\n");/*��Ϣ��ʾ*/
	scanf("%s",&product1.cArea);	/*����ṹ��Ա*/

	printf("Name: %s\n",product1.cName);	/*����Ա�������*/
	printf("Shape: %s\n",product1.cShape);
	printf("Color: %s\n",product1.cColor);	
	printf("Price: %d\n",product1.iPrice);
	printf("Area: %s\n",product1.cArea);

	return 0;
}