#include<stdio.h>	    /*����ͷ�ļ�*/
#include<math.h>		/*����ͷ�ļ�math.h*/

int main()
{
	double fResultSin;	/*������������ֵ*/
	double fResultCos;	/*������������ֵ*/
	double fResultTan;	/*������������ֵ*/

	double fXsin =0.5;	
	double fXcos = 0.5; 
	double fXtan = 0.5;

	fResultSin = sin(fXsin);	/*�������Һ���*/
	fResultCos = cos(fXcos);	/*�������Һ���*/
	fResultTan = tan(fXtan);	/*�������к���*/
		/*���������*/
	printf("The sin of %lf is %lf\n", fXsin, fResultSin); 
	printf("The cos of %lf is %lf\n", fXcos, fResultCos);
	printf("The tan of %lf is %lf\n", fXtan, fResultTan); 
	return 0;
}
   
