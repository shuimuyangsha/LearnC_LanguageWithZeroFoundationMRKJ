#include<stdio.h>

int main()			    /*������main��*/
{
	int iNumber1=1;			/*�ڵ�һ��iNUmber1����λ��*/
	printf("%d\n",iNumber1);		/*�������ֵ*/

	if(iNumber1>0)
	{
		int iNumber1=2;		/*�ڵڶ���iNUmber1����λ��*/
		printf("%d\n",iNumber1);	/*�������ֵ*/

		if(iNumber1>0)
		{
			int iNumber1=3;	/*�ڵ�����iNUmber1����λ��*/
			printf("%d\n",iNumber1);/*�������ֵ*/
		}

		printf("%d\n",iNumber1);	/*�������ֵ*/
	}

	printf("%d\n",iNumber1);		/*�������ֵ*/
	return 0;
}