#include<stdio.h>

extern void GetString(int a,int b,int c);			/*�����ⲿ����*/
 

int main()
{
	 							     
	 GetString(2,3,3);			 
	 return 0;
}
extern void GetString(int a,int b,int c)
{
    float a1=0,b1=0,c1=0;
    a1=(float)180*a/(a+b+c);
    b1=(float)180*b/(a+b+c);
    c1=(float)180*c/(a+b+c);
    printf("ÿ���ڽǵĶ����ǣ�%f,%f,%f\n",a1,b1,c1);
 
}