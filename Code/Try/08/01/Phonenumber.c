#include<stdio.h>
int main()
{
    int iArray[11], index;				/*�������鼰����Ϊ��������*/
    printf("�������ֻ���:\n");

    for (index= 0; index< 11; index++)		/*�����������Ԫ��*/
	{
		scanf("%d",&iArray[index]);				
	}
    printf("�ֻ�����:\n");
    for (index = 0; index< 11; index++)			/*��ʾ�����е�Ԫ��*/
	{
		printf("%d ", iArray[index]);
	}
    printf("\n");
	return 0;
}
