#include "stdio.h"/*包含头文件*/
#include <string.h>

struct sea/*声明季节的结构体*/ 
 {
    char name[64];
 };
union season /*声明季节的共用体*/
{
   struct sea p;    
 };
int main()/*主函数main*/
{
 union season s;/*定义共用体变量*/
  strcpy(s.p.name, "夏季");
 printf("现在是%s\n",s.p.name);/*输出信息*/
  return 0;/*程序结束*/
}
