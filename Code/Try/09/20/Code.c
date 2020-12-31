#include<stdio.h>
#include<ctype.h>

void SwitchShow(char i,char j,char k)
{
  
	if(isupper(i))			/*判断是否是大写字母*/
	{
		printf("存在大写字母\n");
	}

   if(islower(j))						/*判断是否是小写字母*/
	{
		printf("存在小写字母\n");
	}
   if(isdigit(k))                       /*判断是否是数字*/
   {
       printf("存在数字\n");
   }
   printf("密码安全\n");
}

int main()
{
	 
    SwitchShow('A','b','1');        /*输入密码*/
    return 0;						/*程序结束*/
}



