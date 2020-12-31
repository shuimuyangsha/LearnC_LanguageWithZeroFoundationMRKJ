#include <stdio.h>

void CelerityRun(int left, int right, int array[]);

int main()
{
	int i;
	int a[5];
	printf("������Է���������\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}

	/*��С��������*/
	CelerityRun(0,4,a);
    printf("��Է���������С�����������£�\n");

	/*�������*/
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);			/*����Ʊ�λ*/
		if(i == 4)					/*����ǵ�5��Ԫ��*/
			printf("\n");		/*�������*/
	}

	return 0;						/*�������*/
}

void CelerityRun(int left, int right, int array[])
{
	int i,j; 
	int middle,iTemp; 
	i = left; 
	j = right; 
	middle = array[(left+right)/2];				 /*���м�ֵ*/
	do
	{ 
		while((array[i]<middle) && (i<right))	/*������С����ֵ����*/
			i++;      
		while((array[j]>middle) && (j>left))	/*�����Ҵ�����ֵ����*/ 
			j--; 
		if(i<=j)								/*�ҵ���һ��ֵ*/ 
		{ 
			iTemp = array[i]; 
			array[i] = array[j]; 
			array[j] = iTemp; 
			i++; 
			j--; 
		} 
	}while(i<=j);				/*������ߵ��±꽻����ֹͣ�����һ�Σ�*/ 

	/*�ݹ�����*/ 
	if(left<j) 
		CelerityRun(left,j,array); 
	/*�ݹ��Ұ��*/ 
	if(right>i) 
		CelerityRun(i,right,array);
}
