#include<stdio.h>                   /*����ͷ�ļ�*/

int main()                          /*������main*/
{
	int a[4][2];	                /*��������*/
 
	int  i,j;			            /*���ڿ���ѭ��*/

/*�Ӽ���Ϊ����Ԫ�ظ�ֵ*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("�����ά����:\n");	    /*��Ϣ��ʾ*/
    for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
/*ʹԪ�ط�����ʾ*/
		printf("\n");
	}
	return 0;                       /*�������*/
}