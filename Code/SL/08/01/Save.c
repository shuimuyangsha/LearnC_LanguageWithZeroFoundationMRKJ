#include<stdio.h>                           /*����ͷ�ļ�*/
int main()                                  /*������main*/
{
    int iArray[3], index;				    /*�������鼰����Ϊ��������*/
    printf("���������ġ���ѧ��Ӣ��ɼ�:\n");/*��ʾ��Ϣ������ɼ�*/

    for (index= 0; index<3; index++)		/*�����������Ԫ��*/
	{
		scanf("%d", &iArray[index]);				
	}
        

    printf("���ġ���ѧ��Ӣ��ɼ��ֱ���:\n");/*��ʾ��Ϣ������ɼ�*/
    for (index = 0; index< 3; index++)			    /*��ʾ�����е�Ԫ��*/
	{
		printf("%d\t", iArray[index]);
	}
    printf("\n");                                   /*�������*/

	return 0;                                       /*�������*/
}
