#include<stdio.h>

int main()
{
	int iDiscount;	/*表示折扣*/
	int iSpace;		/*表示路程*/
	int iSwitch;	/*表示折扣的检验情况*/	
	float fPrice,fWeight,fAllPrice;
	printf("enter the price , weight and space\n");
	scanf("%f%f%d",&fPrice,&fWeight,&iSpace);
	if(iSpace>3000)
	{
		iSwitch=12;	/*折扣的检验情况为12*/
	}
	else
	{
		iSwitch=iSpace/250;	/*计算折扣的检验情况*/
	}
	
	switch(iSwitch)			/*使用switch进行检验*/
	{
	case 0:
		iDiscount=0;
		break;
	case 1:
		iDiscount=2;
		break;
	case 2:
	case 3:
		iDiscount=5;
		break;
	case 5:
	case 6:
	case 7:
		iDiscount=8;
		break;
	case 8:
	case 9:
	case 10:
	case 11:
		iDiscount=10;
		break;
	case 12:	
		iDiscount=12;
		break;
	default:
		break;
	}

	fAllPrice=fPrice*fWeight*iSpace*(1-iDiscount/100.0);	/*计算总价格*/
	printf("AllPrice is :%.4f\n",fAllPrice);				/*输出结果*/
	return 0;
}
