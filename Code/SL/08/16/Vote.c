#include <stdio.h>          /*����ͷ�ļ�*/
/*��������*/
void CelerityRun(int left, int right, int array[]);

int main()                  /*������main*/
{
	int i;                  /*�������*/
	int a[8];
	printf("����Ʊ����\n");
	for(i=0;i<8;i++)        /*�����Ʊ����*/
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);	
	}

	/*��С��������*/
	CelerityRun(0,7,a);
    printf("8��Ʊ�����ٵ����������£�\n");

	/*�������*/
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);		/*����Ʊ�λ*/
		if(i == 4)					/*����ǵ�5��Ԫ��*/
			printf("\n");		    /*�������*/
	}
printf("\n");
	return 0;						/*�������*/
}

void CelerityRun(int left, int right, int array[])/*���庯��*/
{
	int i,j; /*�������*/
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
			iTemp = array[i]; /**/
			array[i] = array[j]; 
			array[j] = iTemp; 
			i++; 
			j--; 
		} 
	}while(i<=j);			                	/*������ߵ��±꽻����ֹͣ�����һ�Σ�*/ 

	/*�ݹ�����*/ 
	if(left<j) 
		CelerityRun(left,j,array); 
	/*�ݹ��Ұ��*/ 
	if(right>i) 
		CelerityRun(i,right,array);
}
