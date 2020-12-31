#include<stdio.h>

void Logon(char* name,int code);			/*声明函数*/

int main()
{
    Logon("张",123);			 
	return 0;					            /*程序结束*/
}

 
void Logon(char* name,int code) 			/*形式参数*/
{
    if(name=="张三"&&code==123)
      printf("登录成功\n");
    else
      printf("登录失败\n");
         
     
       
}