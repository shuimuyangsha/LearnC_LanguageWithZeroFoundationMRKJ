#include<stdio.h>
#include<math.h>
int main()
{
	int iAbsoluteNumber;						/*��������*/
	int iNumber = -12;							/*����������Ϊ�丳ֵΪ-12*/
	long lResult;								/*���峤����*/
	long lNumber = -1234567890L; 				/*���峤���ͣ�Ϊ�丳ֵΪ-1234567890*/
	double fFloatResult;							/*���帡����*/
	double fNumber = -123.1; 					/*���帡���ͣ�Ϊ�丳ֵΪ-1234.0*/
	
	iAbsoluteNumber=abs(iNumber);				/*��iNumber�ľ���ֵ����iAbsoluteNumber����*/
	lResult= labs(lNumber);						/*��lNumber�ľ���ֵ����iResult����*/
	fFloatResult= fabs(fNumber);				/*��fNumber�ľ���ֵ����fResult����*/
	
	/*���ԭ�������֣�Ȼ�󽫵õ��ľ���ֵ�������*/
	printf("the original number is: %d, the absolute is: %d\n",iNumber,iAbsoluteNumber);
	printf("the original number is: %ld, the absolute is: %ld\n",lNumber,lResult);
	printf("the original number is: %lf, the absolute is: %lf\n",fNumber,fFloatResult);

	return 0;
}