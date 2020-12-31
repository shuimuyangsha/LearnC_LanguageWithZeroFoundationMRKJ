#include<stdio.h>

int Login(char* name,int code);			/*声明函数*/
void welcome(int num);
int main()
{
   int i;
   i=Login("张三",123);
   printf("%d\n",i);
   welcome(i);			 
	return 0;					         /*程序结束*/
}
int Login(char* name,int code) 			/*定义函数*/
{
    int num;
    if(name=="张三"&&code==123)
      return num=1;
    else
      return num=0;
}
void welcome(int num)
{
    if(num==1)
        printf("登录成功\n");
    else
        printf("登录失败\n");
}