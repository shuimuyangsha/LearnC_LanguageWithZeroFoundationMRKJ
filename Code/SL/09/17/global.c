#include<stdio.h>
  
int iGlobalPrice=10;		/*�趨�̵�ĳ�ʼ�۸�*/

void Store1Price();			/*���������������һ��������*/
void Store2Price();			/*����ڶ���������*/
void Store3Price();			/*���������������*/
void ChangePrice();			/*���и����������ͳһ�۸�*/

int main()
{
			/*��ʾ�۸�ı�֮ǰ����������ļ۸�*/
	printf("��˺���ԭ�۸���: %d\n",iGlobalPrice);
	Store1Price();		/*��ʾ1��������ļ۸�*/
	Store2Price();		/*��ʾ2��������ļ۸�*/
	Store3Price();		/*��ʾ3��������ļ۸�*/
			/*���ú������ı�������ļ۸�*/
	ChangePrice();
			/*��ʾ��ʾ����ʾ�޸ĺ�ļ۸�*/
	printf("��˺�����ǰ�۸���: %d\n",iGlobalPrice);
	Store1Price();		/*��ʾ1������������ڼ۸�*/
	Store2Price();		/*��ʾ2������������ڼ۸�*/
	Store3Price();		/*��ʾ3������������ڼ۸�*/
	return 0;
}
/*����1��������ļ۸���*/
void Store1Price()
{
	printf("1����������˺����ļ۸���: %d\n",iGlobalPrice);
}
/*����2��������ļ۸���*/
void Store2Price()
{
	printf("2����������˺����ļ۸���: %d\n",iGlobalPrice);
}
/*����3��������ļ۸���*/
void Store3Price()
{
	printf("3����������˺����ļ۸���: %d\n",iGlobalPrice);
}
/*�������������۸���*/
void ChangePrice()
{
	printf("��˺����ļ۸������Ϊ��");
	scanf("%d",&iGlobalPrice);
}
