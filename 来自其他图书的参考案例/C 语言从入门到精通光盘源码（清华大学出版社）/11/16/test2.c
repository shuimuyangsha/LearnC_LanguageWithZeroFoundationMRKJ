#include<stdio.h>
#include<stdlib.h>

union Category
{
	int iClass;		/*班级*/
	char position[20];	/*职务*/
};

struct Person
{
	char cJob;							/*职业*/
	char cName[20];						/*姓名*/
	int iNumber;						/*编号*/
	char cSex;
	
	union Category Position;
};

void DisplayStudent(struct Person person)
{
	printf("Job :%c\n",person.cJob);
	printf("Name :%s\n",person.cName);
	printf("Number :%d\n",person.iNumber);
	printf("Sex :%c\n",person.cSex);

	printf("Class :%d\n",person.Position.iClass);
}

void DisplayTeacher(struct Person person)
{
	printf("Job :%c\n",person.cJob);
	printf("Name :%s\n",person.cName);
	printf("Number :%d\n",person.iNumber);
	printf("Sex :%c\n",person.cSex);

	printf("Position :%s\n",person.Position.position);
}

int main()
{
	struct Person person[100];

	person[0].cJob='S';
	strcpy(person[0].cName,"LiuWen");
	person[0].cSex='G';
	person[0].iNumber='1';
	person[0].Position.iClass=1;

	person[1].cJob='T';
	strcpy(person[1].cName,"ZhouYu");
	person[1].cSex='G';
	person[1].iNumber=1010;
	strcpy(person[1].Position.position,"Chinese teacher");

	DisplayStudent(person[0]);
	DisplayTeacher(person[1]);
	
}
