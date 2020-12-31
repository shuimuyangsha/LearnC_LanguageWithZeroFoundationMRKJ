#include "stdio.h"
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
}

main()
{
   struct student student1={1001,"liming",'M',20,92.5};
   printf("The information of the student is:\n");
   printf("num:%d\n",student1.num);
   printf("name:%s\n",student1.name);
   printf("sex:%c\n",student1.sex);
   printf("age:%d\n",student1.age);
   printf("score:%5.1f\n",student1.score);
   getch();
   
}
