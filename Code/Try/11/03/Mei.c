#include<stdio.h>
struct Student							 
{
	char cName[20];						 
	int  iNumber;						 
	 						 
} student[5]={{"��Ĥ",1458792365},
				{"����",325656550},
				{"ϴ��¶",324655854},
				{"������",256897412},
				{"жױ��",155655655}};	 

int main()
{
	int i;					 
	for(i=0;i<5;i++)		 
	{
		printf("NO%d Brand:\n",i+1);	 
		printf("Ʒ������: %s, ����: %d\n",student[i].cName,student[i].iNumber);/*ʹ�ñ���i���±꣬��������е�Ԫ������*/
		printf("\n");		/*�ո���*/
	}
	return 0;
}