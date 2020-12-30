#include<stdio.h>
int main()
{
	int iCelsius,iFahrenheit;		/*声明两个变量*/
	printf("Please enter temperature :\n");/*显示提示信息*/
	scanf("%d",&iFahrenheit);		/*在键盘上输入华氏温度*/
	iCelsius=5*(iFahrenheit-32)/9;	/*通过算术表达式进行计算，并将结果赋值*/

	printf("Temperature is :");	/*显示提示消息*/
	printf("%d",iCelsius);		/*显示摄氏温度*/
	printf(" degrees Celsius\n");	/*显示提示消息*/
	return 0;	/*程序结束*/
}