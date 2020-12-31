#include <stdio.h>
int main(int argc, char* argv[])
{
  if(argc <= 1) {
    printf("请输入您的名字\n");
  }
  else {
       printf(" 您好:%s\n",argv[1]);
   
  } 
  return 0;
}
