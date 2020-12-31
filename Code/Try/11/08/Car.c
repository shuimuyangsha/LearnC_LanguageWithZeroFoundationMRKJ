#include "stdio.h"
struct Car {
  float gasoline;
};

void Add(struct Car* pCar) {
  pCar->gasoline += 2;
}

int main()
{
  struct Car car = {12.0f};
  printf("加油前:%f\n",car.gasoline);
  Add(&car);
  printf("加油后:%f\n",car.gasoline);
  Add(&car);
  printf("加油后:%f\n",car.gasoline);
  

  Add(&car);
  printf("加油后:%f\n",car.gasoline);
   

  return 0;
}
