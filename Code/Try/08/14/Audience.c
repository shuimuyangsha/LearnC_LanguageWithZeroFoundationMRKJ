#include <stdio.h>
int main()
{
	int i,j;
    double a[10]={1.4,1.393,0.92,0.862,0.553,0.411,0.164,0.259,0.394,0.562};
	double iTemp; 
	 
	/*�Ӵ�С����*/
	for(i=0;i<9;i++) 				/*���ѭ��Ԫ���±�Ϊ0~8*/
	{ 
		for(j=i+1;j<10;j++) 			/*�ڲ�ѭ��Ԫ���±�Ϊi+1��9*/
		{ 
			if(a[j]>a[i]) 			/*�����ǰֵ������ֵС*/
			{ 
				/*����������ֵ*/
				iTemp = a[i]; 
				a[i]  = a[j]; 
				a[j]  = iTemp; 
			} 
		} 
	}

	/*�������*/
	for(i=0;i<10;i++)
	{
		printf("%f\t",a[i]);		/*����Ʊ�λ*/
		if(i == 4)					/*����ǵ�5��Ԫ��*/
			printf("\n");		    /*�������*/
	}

	return 0;						/*�������*/
}