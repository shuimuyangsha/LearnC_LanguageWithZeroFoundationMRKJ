#include<stdio.h>

int main()
{
	struct Student								/*学生结构*/
	{
		char cName[20];							/*姓名*/
		int  iNumber;							/*学号*/
		char cSex;								/*性别*/
		int iGrade;								/*年级*/
	}student={"SuYuQun",12061212,'W',2};		/*对结构变量进行初始化*/

	struct Student* pStruct;			/*定义结构体类型指针*/
	pStruct=&student;					/*指针指向结构体变量*/
	printf("-----the student's information-----\n");	/*消息提示*/
	printf("Name: %s\n",(*pStruct).cName);		/*使用指针引用变量中的成员*/
	printf("Number: %d\n",(*pStruct).iNumber);
	printf("Sex: %c\n",(*pStruct).cSex);
	printf("Grade: %d\n",(*pStruct).iGrade);
	return 0;
}