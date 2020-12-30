#include<stdio.h>
#include<math.h>
int main()
{
	int iAbsoluteNumber;						/*定义整数*/
	int iNumber = -12;							/*定义整数，为其赋值为-12*/
	long lResult;								/*定义长整型*/
	long lNumber = -1234567890L; 				/*定义长整型，为其赋值为-1234567890*/
	double fFloatResult;							/*定义浮点型*/
	double fNumber = -123.1; 					/*定义浮点型，为其赋值为-1234.0*/
	
	iAbsoluteNumber=abs(iNumber);				/*将iNumber的绝对值赋给iAbsoluteNumber变量*/
	lResult= labs(lNumber);						/*将lNumber的绝对值赋给iResult变量*/
	fFloatResult= fabs(fNumber);				/*将fNumber的绝对值赋给fResult变量*/
	
	/*输出原来的数字，然后将得到的绝对值进行输出*/
	printf("the original number is: %d, the absolute is: %d\n",iNumber,iAbsoluteNumber);
	printf("the original number is: %ld, the absolute is: %ld\n",lNumber,lResult);
	printf("the original number is: %lf, the absolute is: %lf\n",fNumber,fFloatResult);

	return 0;
}