#include<stdio.h>

int main()
{
	int a[2][3],b[3][2];	/*������������*/
	int max,min;			/*��ʾ���ֵ����Сֵ*/
	int h,l,i,j;			/*���ڿ���ѭ��*/

	/*�Ӽ���Ϊ����Ԫ�ظ�ֵ*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("�����ά����:\n");	/*��Ϣ��ʾ*/
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		/*ʹԪ�ط�����ʾ*/
		printf("\n");
	}
	/*�����������Ԫ�ؼ����±�*/
	max = a[0][0];
	h = 0;
	l = 0;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
				h = i;
				l = j;
			}
		}		
	}
	printf("���������Ԫ����:\n");
	printf("max:a[%d][%d]=%d\n",h,l,max);
	/*����������СԪ�ؼ����±�*/
	min = a[0][0];
	h = 0;
	l = 0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min > a[i][j])
			{
				min = a[i][j];
				h = i;
				l = j;
			}
		}		
	}
	printf("��������СԪ����:\n");
	printf("min:a[%d][%d]=%d\n",h,l,min);
	/*������aת�ƺ��������b��*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("���ת����Ķ�ά����:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");/*ʹԪ�ط�����ʾ*/
	}
	return 0;
}