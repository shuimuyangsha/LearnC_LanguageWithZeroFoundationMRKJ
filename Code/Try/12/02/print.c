#include "stdio.h"
#include<string.h>


  //��  
  struct rich{
    char name[64];
  };

  // ����
  struct noodle  {
    char name[64];
  };

  // ˮ��
  struct dumpling{
    char name[64];
  };


  // �緹
  union lunch {
   struct rich p;
   struct noodle c;
  struct  dumpling h;
  };
int main(int argc, char* argv[])
{
 union lunch t;
  strcpy(t.p.name, "�׷�");
  strcpy(t.c.name, "����");
  strcpy(t.h.name, "ˮ��");
   printf("������%s\n",t.h.name);

  
  return 0;
}
