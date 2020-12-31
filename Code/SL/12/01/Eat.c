#include "stdio.h"/*包含头文件*/
#include<string.h>
 

  /*表示桃结构体*/
  struct peaches {
    char name[64];
  };

  /*表示椰子结构体*/
  struct coconut  {
    char name[64];
  };

 /*表示山楂结构体*/
  struct hawthorn {
    char name[64];
  };


  // /*表示罐头共用体*/
  union tin {
  struct  peaches p;
  struct  coconut c;
  struct  hawthorn h;
  };
int main()                  /*主函数main*/
{
  union tin t;              /*定义一个共用体*/
  strcpy(t.p.name, "桃");   /*将相应的名字复制给相应的变量*/
  strcpy(t.c.name, "椰子");
  strcpy(t.h.name, "山楂");

printf("这个罐头瓶装%s\n",t.p.name);/*输出信息*/
  
  return 0;                         /*程序结束*/
}
