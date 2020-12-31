#include "stdio.h"
#include <string.h>


  // 公交车
  struct bus {
    char name[64];
  };

  // 飞机
  struct plane  {
    char name[64];
  };

  // 交通工具
  union Transportation {
   struct bus p;
   struct plane c;
  };
int main()
{
 union Transportation t;
  strcpy(t.p.name, "公交车");
  strcpy(t.c.name, "飞机");
  printf("员工选择%s\n",t.p.name);
  printf("员工选择%s\n",t.c.name);
  return 0;
}
