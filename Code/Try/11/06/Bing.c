#include "stdio.h"

  struct Fridge {
    struct {
      int length;
    }screwdriver[3]; // ������������˿
    int screwdriver_count; // Ŀǰ��˿������
  } fridge;
  int main()
{ 
  int i; 
  struct Fridge * p = &fridge;
  p->screwdriver[0].length = 10;
  p->screwdriver[1].length = 8;
  p->screwdriver_count = 2;
  
  for(i=0; i<p->screwdriver_count; i++) {
     printf("%d\n", p->screwdriver[i].length);
  }

  return 0;
}
