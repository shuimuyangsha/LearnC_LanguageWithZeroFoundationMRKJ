#include<stdio.h>

int iGlobalPrice=100;		/*设定商店的初始价格*/

void Store1Price();			/*声明函数，代表第一个连锁店*/
void Store2Price();			/*代表第二个连锁店*/
void Store3Price();			/*代表第三个连锁店*/
void ChangePrice();			/*进行更改连锁店的统一价格*/

int main()
{
			/*先显示价格改变之前所有连锁店的价格*/
	printf("the chain store's original price is : %d\n",iGlobalPrice);
	Store1Price();		/*显示1号连锁店的价格*/
	Store2Price();		/*显示2号连锁店的价格*/
	Store3Price();		/*显示3号连锁店的价格*/
			/*调用函数，改变连锁店的价格*/
	ChangePrice();
			/*显示提示，显示修改后的价格*/
	printf("the chain store's  present price is : %d\n",iGlobalPrice);
	Store1Price();		/*显示1号连锁店的现在价格*/
	Store2Price();		/*显示2号连锁店的现在价格*/
	Store3Price();		/*显示3号连锁店的现在价格*/
	return 0;
}
/*定义1号连锁店的价格函数*/
void Store1Price()
{
	printf("store1's price is : %d\n",iGlobalPrice);
}
/*定义2号连锁店的价格函数*/
void Store2Price()
{
	printf("store2's price is : %d\n",iGlobalPrice);
}
/*定义3号连锁店的价格函数*/
void Store3Price()
{
	printf("store3's price is : %d\n",iGlobalPrice);
}
/*定义更改连锁店价格函数*/
void ChangePrice()
{
	printf("What price do you want to change?  the price is: ");
	scanf("%d",&iGlobalPrice);
}
