#include "stdio.h"
int main()
{
  // 声明结构体，同时定义变量
  struct Car {
    struct _Engine {
      int height;
      int width;
    } engine;  // 发动机
    int color; // 颜色
  } a_car;

  // 给发动机属性赋值
  a_car.engine.width = 40;
  a_car.engine.height = 60;

  // 设置车子的颜色
  a_car.color = 0x123456;

  printf("设置成功\n");

  return 0;
}
