#include<stdio.h>

int main()
{
	int iDiscount;	/*��ʾ�ۿ�*/
	int iSpace;		/*��ʾ·��*/
	int iSwitch;	/*��ʾ�ۿ۵ļ������*/	
	float fPrice,fWeight,fAllPrice;
	printf("enter the price , weight and space\n");
	scanf("%f%f%d",&fPrice,&fWeight,&iSpace);
	if(iSpace>3000)
	{
		iSwitch=12;	/*�ۿ۵ļ������Ϊ12*/
	}
	else
	{
		iSwitch=iSpace/250;	/*�����ۿ۵ļ������*/
	}
	
	switch(iSwitch)			/*ʹ��switch���м���*/
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

	fAllPrice=fPrice*fWeight*iSpace*(1-iDiscount/100.0);	/*�����ܼ۸�*/
	printf("AllPrice is :%.4f\n",fAllPrice);				/*������*/
	return 0;
}
