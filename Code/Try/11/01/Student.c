#include "stdio.h"
#include<string.h>
int main()
{
  struct Teacher {
    char name[64]; // ����
    int age;       // ����
    int seniority; // ����
  };

  struct Teacher a_teacher;
  strcpy(a_teacher.name, "��ʦ");
  a_teacher.age = 35;
  a_teacher.seniority = 10;
  printf("����:%s\n",a_teacher.name);
  printf("����:%d\n",a_teacher.age);
  printf("����:%d\n",a_teacher.seniority);
  return 0;
}
