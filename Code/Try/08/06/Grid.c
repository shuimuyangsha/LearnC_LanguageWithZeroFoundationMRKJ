#include<stdio.h>

int main()
{
	int a[3][3];	/*��������*/
 
	int  i,j;			/*���ڿ���ѭ��*/

	/*�Ӽ���Ϊ����Ԫ�ظ�ֵ*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("�����ά����:\n");	/*��Ϣ��ʾ*/
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		/*ʹԪ�ط�����ʾ*/
		printf("\n");
	}
	return 0;
}