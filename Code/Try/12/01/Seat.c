#include "stdio.h"
#include <string.h>


  // ������
  struct bus {
    char name[64];
  };

  // �ɻ�
  struct plane  {
    char name[64];
  };

  // ��ͨ����
  union Transportation {
   struct bus p;
   struct plane c;
  };
int main()
{
 union Transportation t;
  strcpy(t.p.name, "������");
  strcpy(t.c.name, "�ɻ�");
  printf("Ա��ѡ��%s\n",t.p.name);
  printf("Ա��ѡ��%s\n",t.c.name);
  return 0;
}
