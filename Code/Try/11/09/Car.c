#include "stdio.h"
int main()
{
  // �����ṹ�壬ͬʱ�������
  struct Car {
    struct _Engine {
      int height;
      int width;
    } engine;  // ������
    int color; // ��ɫ
  } a_car;

  // �����������Ը�ֵ
  a_car.engine.width = 40;
  a_car.engine.height = 60;

  // ���ó��ӵ���ɫ
  a_car.color = 0x123456;

  printf("���óɹ�\n");

  return 0;
}
