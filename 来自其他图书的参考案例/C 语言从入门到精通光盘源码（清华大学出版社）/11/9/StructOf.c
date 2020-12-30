#include<stdio.h>

struct date								/*时间结构*/
{
	int year;								/*年*/
	int month;								/*月*/
	int day;								/*日*/
};

struct student								/*学生信息结构*/
{
	char name[30];							/*姓名*/
	int num;								/*学号*/
	char sex;								/*性别*/
	struct date birthday;						/*出生日期*/
}student={"SuYuQun",12061212,'W',{1986,12,6}};	/*为结构变量初始化*/

int main()
{
	printf("-----Information-----\n");
	printf("Name: %s\n",student.name);	/*输出结构成员*/
	printf("Number: %d\n",student.num);
	printf("Sex: %c\n",student.sex);
	printf("Birthday: %d,%d,%d\n",student.birthday.year,
			student.birthday.month,student.birthday.day);/*将成员结构体数据输出*/

	return 0;
}