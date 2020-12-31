#include "stdio.h"                      /*包含头文件*/
#include<string.h>
struct Car                              /*声明结构体*/
{
    char name[64];                      /*汽车品牌名字*/
    char color[20];                     /*颜色*/
    float length;                       /*长度*/       
    int seniority;                      /*承载量*/ 
};
int main()                              /*主函数main()*/
{
  struct Car a_car;                     /*定义结构体变量*/
  strcpy(a_car.name, "路虎");           /*将汽车品牌名复制给结构体变量*/
  strcpy(a_car.color, "黑色");          /*将汽车颜色复制给结构体变量*/
  a_car.length = 4.85f;                 /*汽车长度*/
  a_car.seniority = 5;                  /*汽车承载量*/
  printf("车牌名:%s\n",a_car.name);     /*输出结构体成员*/
  printf("颜色是:%s\n",a_car.color);    /*输出结构体成员*/
  printf("车长:%f米\n",a_car.length);   /*输出结构体成员*/
  printf("可承载%d人\n",a_car.seniority);/*输出结构体成员*/
  return 0;                              /*程序结束*/
}
