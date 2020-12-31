#include "stdio.h"

  struct Fridge {
    struct {
      int length;
    }screwdriver[3]; // 最多包含三个螺丝
    int screwdriver_count; // 目前螺丝的数量
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
