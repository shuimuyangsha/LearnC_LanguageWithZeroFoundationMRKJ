#include<stdio.h>

struct Student								/*学生结构*/
{
	char cName[20];							/*姓名*/
	int  iNumber;							/*学号*/
	char cSex;								/*性别*/
	int iGrade;								/*年级*/
} student[5]={{"WangJiasheng",12062212,'M',3},
		{"YuLongjiao",12062213,'W',3},
		{"JiangXuehuan",12062214,'W',3},
		{"ZhangMeng",12062215,'W',3},
		{"HanLiang",12062216,'M',3}};			/*定义数组并设置初始值*/


int main()
{
	struct Student* pStruct;
	int index;
	pStruct=student;
	for(index=0;index<5;index++,pStruct++)
	{
		printf("NO%d student:\n",index+1);			/*首先输出学生的名次*/
		/*使用变量index做下标，输出数组中的元素数据*/
		printf("Name: %s, Number: %d\n",pStruct->cName,pStruct->iNumber);
		printf("Sex: %c, Grade: %d\n",pStruct->cSex,pStruct->iGrade);
		printf("\n");						/*空格行*/
	}
	return 0;
}