#include<stdio.h>
int main()
{
	int i,j;
	int a[12];
	int iTemp; 
	printf("����ɼ���\n");
 
	for(i=0;i<12;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}
	/*�Ӹߵ�������*/
	for(i=0;i<12;i++) 				/*���ѭ��Ԫ���±�*/
	{ 
		for(j=12;j>=i;j--) 			/*�ڲ�ѭ��Ԫ���±�*/
		{ 
			if(a[j]>a[j-1]) 		/*���ǰһ�����Ⱥ�һ����С*/
			{ 
				/*������������Ԫ�ص�ֵ*/
				iTemp  = a[j-1]; 
				a[j-1] = a[j]; 
				a[j]   = iTemp; 
			} 
		} 
	}

	/*�������*/
	for(i=0;i<12;i++)
	{
		printf("%d\t",a[i]);			/*����Ʊ�λ*/
		if(i == 4)					/*����ǵ�5��Ԫ��*/
			printf("\n");			/*�������*/
	}

	return 0;						/*�������*/
}
	
