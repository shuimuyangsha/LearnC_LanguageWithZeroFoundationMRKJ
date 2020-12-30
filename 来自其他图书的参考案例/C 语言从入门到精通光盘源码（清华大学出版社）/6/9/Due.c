#include<stdio.h>

int main()
{
	float fDues;	/*定义变量表示欠款数*/
	float fAmount;	/*表示要还的总欠款数*/
	int iOntime;	/*表示是否按时归还*/
	char cChar;		/*用来接受用户输入的字符*/

	
	printf("Enter dues amount:\n");	/*显示信息，提示输入欠款金额*/
	scanf("%f",&fDues);				/*用户输入*/
	printf("On Time? (y/n)\n");		/*显示信息，提示还款是否按时还款*/
	getchar();						/*得到回车字符*/
	cChar=getchar();				/*得到输入的字符*/
	iOntime=(cChar=='y')?1:0;		/*使用条件运算符根据字符选择进行选择操作*/
	fAmount=iOntime?fDues:(fDues*1.1);	/*使用条件运算符根据iOntime值的真假进行选择操作*/
	printf("the Amount is:%.2f\n",fAmount);/*将计算的应还的总欠款数输出*/
	return 0;
}