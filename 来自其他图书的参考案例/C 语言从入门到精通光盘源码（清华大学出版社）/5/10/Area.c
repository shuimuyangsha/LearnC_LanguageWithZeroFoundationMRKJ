#include<stdio.h>

int main()
{
	float Pie=3.14f;	/*����Բ����*/
	
	float fArea;		/*�������*/
	float fRadius;
	puts("Enter the radius:");
	scanf("%f",&fRadius);	/*����Բ�İ뾶*/
	fArea=fRadius*fRadius*Pie;	/*����Բ�����*/
	printf("The Area is: %.2f\n",fArea);		/*�������Ľ��*/
	return 0;			/*�������*/
}