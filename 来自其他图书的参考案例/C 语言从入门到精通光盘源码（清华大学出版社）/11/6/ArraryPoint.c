#include<stdio.h>

struct Student								/*ѧ���ṹ*/
{
	char cName[20];							/*����*/
	int  iNumber;							/*ѧ��*/
	char cSex;								/*�Ա�*/
	int iGrade;								/*�꼶*/
} student[5]={{"WangJiasheng",12062212,'M',3},
		{"YuLongjiao",12062213,'W',3},
		{"JiangXuehuan",12062214,'W',3},
		{"ZhangMeng",12062215,'W',3},
		{"HanLiang",12062216,'M',3}};			/*�������鲢���ó�ʼֵ*/


int main()
{
	struct Student* pStruct;
	int index;
	pStruct=student;
	for(index=0;index<5;index++,pStruct++)
	{
		printf("NO%d student:\n",index+1);			/*�������ѧ��������*/
		/*ʹ�ñ���index���±꣬��������е�Ԫ������*/
		printf("Name: %s, Number: %d\n",pStruct->cName,pStruct->iNumber);
		printf("Sex: %c, Grade: %d\n",pStruct->cSex,pStruct->iGrade);
		printf("\n");						/*�ո���*/
	}
	return 0;
}