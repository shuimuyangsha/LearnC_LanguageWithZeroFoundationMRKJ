#include <stdio.h>
int main()
{
	int i,iTemp,iPos;
    int a[12]={50,90,70,80,75,89,55,100,40,60,45,99};

	/*��С��������*/
	for(i=1;i<12;i++) 							/*ѭ��������Ԫ��*/
	{ 
		iTemp = a[i]; 						/*���ò���ֵ*/
		iPos = i-1; 
		while((iPos>=0) && (iTemp<a[iPos])) 	/*Ѱ�Ҳ���ֵ��λ��*/
		{ 
			a[iPos+1] = a[iPos]; 				/*������ֵ*/
			iPos--; 
		} 
		a[iPos+1] = iTemp; 
	}
printf("��з�����ĸ�����ƥ�䣬ƥ������ɵ͵������£�\n");
	/*�������*/
	for(i=0;i<12;i++)
	{
		printf("%d\t",a[i]);			/*����Ʊ�λ*/
		if(i == 4)					/*����ǵ�5��Ԫ��*/
			printf("\n");		/*�������*/
	}

	return 0;						/*�������*/
}
