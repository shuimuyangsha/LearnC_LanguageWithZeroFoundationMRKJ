#include "stdio.h"
struct Food {
  char food_1[64];
  char food_2[64];
};
void eat(struct Food food) {
    printf("%s,%s\n",food.food_1,food.food_2);
}


int main()
{
struct  Food food = {"´óÃ×", "Å£Èâ"};
  eat(food);
  return 0;
}
