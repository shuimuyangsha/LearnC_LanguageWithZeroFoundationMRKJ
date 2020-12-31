#include "stdio.h"
#include<string.h>
int main()
{
  struct Teacher {
    char name[64]; // 姓名
    int age;       // 年龄
    int seniority; // 教龄
  };

  struct Teacher a_teacher;
  strcpy(a_teacher.name, "明师");
  a_teacher.age = 35;
  a_teacher.seniority = 10;
  printf("姓名:%s\n",a_teacher.name);
  printf("年龄:%d\n",a_teacher.age);
  printf("教龄:%d\n",a_teacher.seniority);
  return 0;
}
