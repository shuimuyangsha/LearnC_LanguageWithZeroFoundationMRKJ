#include<stdio.h>

struct Student								/*ѧ���ṹ*/
{
	char cName[20];						/*����*/
	int  iNumber;						/*ѧ��*/
	char cSex;							/*�Ա�*/
	int iGrade;								/*�꼶*/
} student[5]={{"WangJiasheng",12062212,'M',3},
				{"YuLongjiao",12062213,'W',3},
				{"JiangXuehuan",12062214,'W',3},
				{"ZhangMeng",12062215,'W',3},
				{"HanLiang",12062216,'M',3}};	/*�������鲢���ó�ʼֵ*/

int main()
{
	int i;					/*ѭ�����Ʊ���*/
	for(i=0;i<5;i++)		/*ʹ��for����5��ѭ��*/
	{
		printf("NO%d student:\n",i+1);		/*�������ѧ��������*/
		printf("Name: %s, Number: %d\n",student[i].cName,student[i].iNumber);/*ʹ�ñ���i���±꣬��������е�Ԫ������*/
		printf("Sex: %c, Grade: %d\n",student[i].cSex,student[i]. iGrade);
		printf("\n");		/*�ո���*/
	}
	return 0;
}