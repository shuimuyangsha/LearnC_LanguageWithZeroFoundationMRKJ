#include<stdio.h>

int main()
{
	int iHoursWorded=8;		/*定义变量，为变量赋初值。表示工作时间*/
	int iHourlyRate;		/*声明变量，表示一个小时的薪水*/
	int iGrossPay;			/*声明变量，表示得到的工资*/

	iHourlyRate=13;			/*为变量赋值*/
	iGrossPay=iHoursWorded*iHourlyRate;	/*将表达式的结果赋值给变量*/

	printf("The HoursWorded is: %d\n",iHoursWorded);	/*显示工作时间变量*/
	printf("The HourlyRate is: %d\n",iHourlyRate);		/*显示一个小时的薪水*/
	printf("The GrossPay is: %d\n",iGrossPay);			/*显示工作所得的工资*/

	return 0;	/*程序结束*/
}