#include<stdio.h>

void Caculate()
{
	static int iSum=3;
	int iTemp;
	iTemp=iSum;				//iSum�Ǿ�̬����
	iSum=iTemp*3;
	printf("%d\n",iSum);
}
int main()
{
	Caculate();	//�õ�iSum��ƽ��
	Caculate();	//�õ�iSum������
	return 0;
}

