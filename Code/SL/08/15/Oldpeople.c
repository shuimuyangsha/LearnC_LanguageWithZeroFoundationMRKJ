#include <stdio.h>                              /*����ͷ�ļ�*/
int main()                                      /*������main*/
{
	int i;                                      /*�������*/
	int a[10];
	int iTemp; 
	int iPos; 
	printf("������������\n");                   /*��ʾ��Ϣ*/
	for(i=0;i<10;i++)                           /*������������*/
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}

	/*�Ӵ�С����*/
	for(i=1;i<10;i++) 							/*ѭ��������Ԫ��*/
	{ 
		iTemp = a[i]; 						    /*���ò���ֵ*/
		iPos = i-1; 
		while((iPos>=0) && (iTemp<a[iPos])) 	/*Ѱ�Ҳ���ֵ��λ��*/
		{ 
			a[iPos+1] = a[iPos]; 				/*������ֵ*/
			iPos--; 
		} 
		a[iPos+1] = iTemp; 
	}

	/*�������*/
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);			        /*����Ʊ�λ*/
		if(i == 4)					            /*����ǵ�5��Ԫ��*/
			printf("\n");		                /*�������*/
	}
    printf("\n");

	return 0;						            /*�������*/
}
