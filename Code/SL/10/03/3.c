#include<stdio.h>                           	/*����ͷ�ļ�*/
int main()                                  	/*������main*/
{
	long i,j,c;                             		/*�������*/
  long *p,*q,*n;                          		/*����ָ�����*/
	printf("please input the numbers:\n");  	/*��ʾ�û���������*/
	scanf("%ld,ld",&i,&j);                  	/*��������*/
 c=i+j;                                  		/*ʵ���������*/
	p=&i;                                   		/*����ַ����ָ�����*/
  q=&j; 
  n=&c; 
	 printf("%ld\n",&*p); 					/*�������i�ĵ�ַ*/
  printf("%ld\n",&*q); 					/*�������j�ĵ�ַ*/
  printf("%ld\n",&*n); 					/*�������c�ĵ�ַ*/
  return 0;                               		/*�������*/
}
