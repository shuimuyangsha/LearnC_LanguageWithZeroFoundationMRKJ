#include <stdio.h>
int main()
{
	int i,j;
    int a[5]={3,8,5,3,2};
	int iTemp; 
	int iPos; 
	 
	/*�Ӹߵ�������*/
	for(i=0;i<5;i++) 				/*�������ѭ��Ϊ�±�0~8��Ԫ��*/
	{ 
		iTemp = a[i]; 				/*���õ�ǰԪ��Ϊ���ֵ*/
		iPos = i;					/*��¼Ԫ��λ��*/
		for(j=i+1;j<5;j++) 		 
		{ 
			if(a[j]>iTemp) 			/*�����ǰԪ�ر����ֵ����*/
			{ 
				iTemp = a[j];	 	/*�����������ֵ*/
				iPos = j; 			/*��¼Ԫ��λ��*/
			} 
		} 
		/*��������Ԫ��ֵ*/
		a[iPos] = a[i]; 
		a[i] = iTemp; 
	}
    printf("����ƻ�����������Ӵ�С����Ϊ��\n");

	/*�������*/
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);		/*����Ʊ�λ*/
	}
    printf("\n");

	return 0;						/*�������*/
}
