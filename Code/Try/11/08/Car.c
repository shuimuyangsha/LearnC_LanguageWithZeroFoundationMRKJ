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
  printf("����ǰ:%f\n",car.gasoline);
  Add(&car);
  printf("���ͺ�:%f\n",car.gasoline);
  Add(&car);
  printf("���ͺ�:%f\n",car.gasoline);
  

  Add(&car);
  printf("���ͺ�:%f\n",car.gasoline);
   

  return 0;
}
