#include<stdio.h>
#include<math.h>		/*包含头文件math.h*/

int main()
{
	double fResultSin;	/*用来保存正弦值*/
	double fResultCos;	/*用来保存余弦值*/
	double fResultTan;	/*用来保存正切值*/

	double fXsin =0.5;	
	double fXcos = 0.5; 
	double fXtan = 0.5;

	fResultSin = sin(fXsin);	/*调用正弦函数*/
	fResultCos = cos(fXcos);	/*调用余弦函数*/
	fResultTan = tan(fXtan);	/*调用正切函数*/
		/*输出运算结果*/
	printf("The sin of %lf is %lf\n", fXsin, fResultSin); 
	printf("The cos of %lf is %lf\n", fXcos, fResultCos);
	printf("The tan of %lf is %lf\n", fXtan, fResultTan); 
	return 0;
}
   
