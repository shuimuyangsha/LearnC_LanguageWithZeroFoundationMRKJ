#include<stdio.h>
#include<string.h>


struct Student							/*ѧ���ṹ*/
{
	char cName[20];					/*����*/
	int  iNumber;						/*ѧ��*/
	char cSex;						/*�Ա�*/
	int iGrade;							/*�꼶*/
}student;							/*�������*/

int main()
{

	struct Student* pStruct;					/*����ṹ������ָ��*/
	pStruct=&student;						/*ָ��ָ��ṹ�����*/

	strcpy(pStruct->cName,"SuYuQun");		/*���ַ����������Ƶ���Ա������*/
	pStruct->iNumber=12061212;				/*Ϊ��Ա������ֵ*/
	pStruct->cSex='W';
	pStruct->iGrade=2;

	printf("-----the student's information-----\n");	/*��Ϣ��ʾ*/
	printf("Name: %s\n",student.cName);		/*ʹ�ñ���ֱ�����*/
	printf("Number: %d\n",student.iNumber);
	printf("Sex: %c\n",student.cSex);
	printf("Grade: %d\n",student.iGrade);
	return 0;
}
