#include<stdio.h>

struct date								/*ʱ��ṹ*/
{
	int year;								/*��*/
	int month;								/*��*/
	int day;								/*��*/
};

struct student								/*ѧ����Ϣ�ṹ*/
{
	char name[30];							/*����*/
	int num;								/*ѧ��*/
	char sex;								/*�Ա�*/
	struct date birthday;						/*��������*/
}student={"SuYuQun",12061212,'W',{1986,12,6}};	/*Ϊ�ṹ������ʼ��*/

int main()
{
	printf("-----Information-----\n");
	printf("Name: %s\n",student.name);	/*����ṹ��Ա*/
	printf("Number: %d\n",student.num);
	printf("Sex: %c\n",student.sex);
	printf("Birthday: %d,%d,%d\n",student.birthday.year,
			student.birthday.month,student.birthday.day);/*����Ա�ṹ���������*/

	return 0;
}