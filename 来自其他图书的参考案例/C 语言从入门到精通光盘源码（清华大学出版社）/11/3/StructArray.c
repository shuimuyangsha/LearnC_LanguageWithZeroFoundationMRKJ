#include<stdio.h>

struct Student								/*学生结构*/
{
	char cName[20];						/*姓名*/
	int  iNumber;						/*学号*/
	char cSex;							/*性别*/
	int iGrade;								/*年级*/
} student[5]={{"WangJiasheng",12062212,'M',3},
				{"YuLongjiao",12062213,'W',3},
				{"JiangXuehuan",12062214,'W',3},
				{"ZhangMeng",12062215,'W',3},
				{"HanLiang",12062216,'M',3}};	/*定义数组并设置初始值*/

int main()
{
	int i;					/*循环控制变量*/
	for(i=0;i<5;i++)		/*使用for进行5次循环*/
	{
		printf("NO%d student:\n",i+1);		/*首先输出学生的名次*/
		printf("Name: %s, Number: %d\n",student[i].cName,student[i].iNumber);/*使用变量i做下标，输出数组中的元素数据*/
		printf("Sex: %c, Grade: %d\n",student[i].cSex,student[i]. iGrade);
		printf("\n");		/*空格行*/
	}
	return 0;
}