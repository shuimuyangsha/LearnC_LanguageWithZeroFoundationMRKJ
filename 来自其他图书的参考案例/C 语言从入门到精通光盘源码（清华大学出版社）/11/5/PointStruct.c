#include<stdio.h>
#include<string.h>


struct Student							/*学生结构*/
{
	char cName[20];					/*姓名*/
	int  iNumber;						/*学号*/
	char cSex;						/*性别*/
	int iGrade;							/*年级*/
}student;							/*定义变量*/

int main()
{

	struct Student* pStruct;					/*定义结构体类型指针*/
	pStruct=&student;						/*指针指向结构体变量*/

	strcpy(pStruct->cName,"SuYuQun");		/*将字符串常量复制到成员变量中*/
	pStruct->iNumber=12061212;				/*为成员变量赋值*/
	pStruct->cSex='W';
	pStruct->iGrade=2;

	printf("-----the student's information-----\n");	/*消息提示*/
	printf("Name: %s\n",student.cName);		/*使用变量直接输出*/
	printf("Number: %d\n",student.iNumber);
	printf("Sex: %c\n",student.cSex);
	printf("Grade: %d\n",student.iGrade);
	return 0;
}
