#include<stdio.h>

struct Student								/*ѧ���ṹ*/
{
	char cName[20];							/*����*/
	float fScore[3];						/*����*/
}student={"SuYuQun",98.5f,89.0,93.5f};									/*�������*/

void Display(struct Student stu)	/*�β�Ϊ�ṹ�����*/
{
	printf("-----Information-----\n");	/*��ʾ��Ϣ*/
	printf("Name: %s\n",stu.cName);		/*���ýṹ��Ա*/
	printf("Chinese: %.2f\n",stu.fScore[0]);
	printf("Math: %.2f\n",stu.fScore[1]);
	printf("English: %.2f\n",stu.fScore[2]);
	/*����ƽ������*/
	printf("Average score:%.2f\n",(stu.fScore[0]+stu.fScore[1]+stu.fScore[2])/3);
	
}

int main()
{
	Display(student);	/*���ú������ṹ������Ϊʵ�ν��д���*/
	return 0;
}