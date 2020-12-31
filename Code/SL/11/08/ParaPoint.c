#include<stdio.h>

struct Student								/*学生结构*/
{
	char cName[20];							/*姓名*/
	float fScore[3];						/*分数*/
}student={"SuYuQun",98.5f,89.0,93.5f};									/*定义变量*/

void Display(struct Student* stu)	/*形参为结构体变量的指针*/
{
	printf("-----Information-----\n");	/*提示信息*/
	printf("Name: %s\n",stu->cName);		/*使用指针引用结构体变量中的成员*/
	printf("English: %.2f\n",stu->fScore[2]);
	stu->fScore[2]=90.0f;			/*更改成员变量的值*/
}

int main()
{
	struct Student* pStruct=&student;  /*定义结构体变量指针*/
	Display(pStruct);	/*调用函数，结构变量作为实参进行传递*/
	printf("Changed English: %.2f\n",pStruct->fScore[2]);	/*输出成员的值*/
	return 0;
}