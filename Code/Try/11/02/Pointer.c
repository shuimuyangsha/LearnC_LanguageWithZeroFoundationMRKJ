#include "stdio.h"
struct Student {
  int age;
};
void AddAge(struct Student * pStudent) {
  pStudent->age += 1;
}
int main()
{
  struct Student a;
  a.age = 12;
  printf("%d\n",a.age);
  AddAge(&a);
  printf("%d\n",a.age);
  return 0;
}
