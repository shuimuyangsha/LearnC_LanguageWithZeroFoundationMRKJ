#include<stdio.h>

int main()
{
    int iArray[5], index, temp;				/*�������鼰����Ϊ��������*/
    printf("Please enter a Array:\n");

    for (index= 0; index< 5; index++)		/*�����������Ԫ��*/
	{
		scanf("%d", &iArray[index]);				
	}
        

    printf("Original Array is:\n");
    for (index = 0; index< 5; index++)			/*��ʾ�����е�Ԫ��*/
	{
		printf("%d ", iArray[index]);
	}
    printf("\n");
	

    for (index= 0; index < 2; index++)				/*��������Ԫ�ص�ǰ��λ�û���*/
    {
        temp = iArray[index]; 							/*Ԫ��λ�û����Ĺ��̽����м����temp*/
        iArray[index] = iArray[4-index];
        iArray[4-index] = temp;
    }

    printf("Now Array is:\n");
    for (index = 0; index< 5; index++)				/*��ת����������ٴ����*/
	{
		printf("%d ", iArray[index]);
	}
    printf("\n");
	return 0;
}
