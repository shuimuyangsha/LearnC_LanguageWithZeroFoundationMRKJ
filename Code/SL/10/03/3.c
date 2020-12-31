#include<stdio.h>                           	/*包含头文件*/
int main()                                  	/*主函数main*/
{
	long i,j,c;                             		/*定义变量*/
  long *p,*q,*n;                          		/*定义指针变量*/
	printf("please input the numbers:\n");  	/*提示用户输入数据*/
	scanf("%ld,ld",&i,&j);                  	/*输入数据*/
 c=i+j;                                  		/*实现两数相加*/
	p=&i;                                   		/*将地址赋给指针变量*/
  q=&j; 
  n=&c; 
	 printf("%ld\n",&*p); 					/*输出变量i的地址*/
  printf("%ld\n",&*q); 					/*输出变量j的地址*/
  printf("%ld\n",&*n); 					/*输出变量c的地址*/
  return 0;                               		/*程序结束*/
}
