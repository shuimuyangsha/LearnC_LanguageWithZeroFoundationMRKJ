#include<stdio.h>

int main()
{
	float Pie=3.14f;	/*����Բ����*/
	
	float fArea;		/*�������*/
	float fRadius;
	puts("Enter the radius:");
	scanf("%f",&fRadius);	/*����Բ�İ뾶*/
	fArea=2*fRadius*Pie;	/*����Բ���ܳ�*/
	printf("The perimeter is: %.2f\n",fArea);		/*�������Ľ��*/
    fArea=4/3*(fRadius*fRadius*fRadius*Pie);	/*����������*/
	printf("The volume is: %.2f\n",fArea);		/*�������Ľ��*/
	return 0;			/*�������*/
}