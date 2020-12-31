#include "stdio.h"
#include<string.h>


  //饭  
  struct rich{
    char name[64];
  };

  // 面条
  struct noodle  {
    char name[64];
  };

  // 水饺
  struct dumpling{
    char name[64];
  };


  // 午饭
  union lunch {
   struct rich p;
   struct noodle c;
  struct  dumpling h;
  };
int main(int argc, char* argv[])
{
 union lunch t;
  strcpy(t.p.name, "米饭");
  strcpy(t.c.name, "面条");
  strcpy(t.h.name, "水饺");
   printf("决定吃%s\n",t.h.name);

  
  return 0;
}
