#include<stdio.h>

int main()
{
    int iArray[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, index;	/*�������鼰����Ϊ��������*/
    int iArray1[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}, index1;/*�������鼰����Ϊ��������*/
    printf("������ʦ���߰�����Ŷӱ�ţ���ʦ�źñ����:\n");
   
    for (index = 0; index< 20; index++)		                                	/*��ʾ���*/
	{
		printf("%d ", iArray[index]);
	}
    printf("\n");
    printf("��������������ͬѧ�ı����:\n");
  
    for (index1 = 7; index1< 21; index1++)			                                /*��ʾ���*/
	{
		printf("%d ", iArray1[index1]);
	}
    printf("\n");
	return 0;
}
