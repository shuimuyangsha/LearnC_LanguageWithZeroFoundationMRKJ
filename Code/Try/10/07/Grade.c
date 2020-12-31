#include "stdio.h"
int main()
{
  int average_score[5][3] = {
    {87,62,93},
    {86,68,33},
    {57,92,73},
    {47,22,63},
    {67,32,83}
  };
      int iclass;
      int term;
  for(iclass=0; iclass < 5; iclass++) {
      printf("班级%d的平均成绩分别为:\n",1+iclass);
    for(term=0; term < 3; term ++) {
    printf("%d\n",average_score[iclass][term]);
     
    }
   
  }
  return 0;
}
