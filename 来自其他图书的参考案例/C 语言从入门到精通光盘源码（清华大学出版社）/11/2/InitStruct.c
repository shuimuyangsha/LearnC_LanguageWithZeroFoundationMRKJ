#include<stdio.h>

struct Student					/*ѧ���ṹ*/
{
	char cName[20];				/*����*/
	char cSex;					/*�Ա�*/
	int iGrade;					/*�꼶*/
} student1={"HanXue",'W',3};					/*������������ó�ʼֵ*/


int main()
{
	struct Student student2={"WangJiasheng",'M',3};/*������������ó�ʼֵ*/
	
	/*����һ���ṹ���е��������*/
	printf("the student1's information:\n");
	printf("Name: %s\n",student1.cName);
	printf("Sex: %c\n",student1.cSex);
	printf("Grade: %d\n",student1.iGrade);
	/*���ڶ����ṹ���е��������*/
	printf("the student2's information:\n");
	printf("Name: %s\n",student2.cName);
	printf("Sex: %c\n",student2.cSex);
	printf("Grade: %d\n",student2.iGrade);
	return 0;
}