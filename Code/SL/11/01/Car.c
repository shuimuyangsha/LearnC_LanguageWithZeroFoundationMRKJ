#include "stdio.h"                      /*����ͷ�ļ�*/
#include<string.h>
struct Car                              /*�����ṹ��*/
{
    char name[64];                      /*����Ʒ������*/
    char color[20];                     /*��ɫ*/
    float length;                       /*����*/       
    int seniority;                      /*������*/ 
};
int main()                              /*������main()*/
{
  struct Car a_car;                     /*����ṹ�����*/
  strcpy(a_car.name, "·��");           /*������Ʒ�������Ƹ��ṹ�����*/
  strcpy(a_car.color, "��ɫ");          /*��������ɫ���Ƹ��ṹ�����*/
  a_car.length = 4.85f;                 /*��������*/
  a_car.seniority = 5;                  /*����������*/
  printf("������:%s\n",a_car.name);     /*����ṹ���Ա*/
  printf("��ɫ��:%s\n",a_car.color);    /*����ṹ���Ա*/
  printf("����:%f��\n",a_car.length);   /*����ṹ���Ա*/
  printf("�ɳ���%d��\n",a_car.seniority);/*����ṹ���Ա*/
  return 0;                              /*�������*/
}
