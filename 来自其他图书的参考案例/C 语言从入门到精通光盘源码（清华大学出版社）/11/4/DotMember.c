#include<stdio.h>

int main()
{
	struct Student								/*ѧ���ṹ*/
	{
		char cName[20];							/*����*/
		int  iNumber;							/*ѧ��*/
		char cSex;								/*�Ա�*/
		int iGrade;								/*�꼶*/
	}student={"SuYuQun",12061212,'W',2};		/*�Խṹ�������г�ʼ��*/

	struct Student* pStruct;			/*����ṹ������ָ��*/
	pStruct=&student;					/*ָ��ָ��ṹ�����*/
	printf("-----the student's information-----\n");	/*��Ϣ��ʾ*/
	printf("Name: %s\n",(*pStruct).cName);		/*ʹ��ָ�����ñ����еĳ�Ա*/
	printf("Number: %d\n",(*pStruct).iNumber);
	printf("Sex: %c\n",(*pStruct).cSex);
	printf("Grade: %d\n",(*pStruct).iGrade);
	return 0;
}