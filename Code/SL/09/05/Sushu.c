#include <stdio.h>          /*����ͷ�ļ�*/
int fun(int lim,int aa[])   /*�Զ��庯��*/
{
    int i,j=0,k=0;          /*���������±�ѭ������*/
    for(i=2;i<lim;i++)      /*�ж�����*/
    {
        for(j=2;j<i;j++)
            if(i%j==0) 
                break;
                if(j==i) 
                    aa[k++]=i; 

    }
    return k;                       /*�������*/

}
int main()                          /*������main*/
{
    int aa[100],i;                  /*�������*/
    fun(100,aa);                    /*����fun()����*/
    printf("100���ڵ������У�\n");  /*��ʾ��Ϣ*/
    for(i=0;i<25;i++)               /*ѭ��������������*/
	{
		
		printf("%d\t",aa[i]);       /*���������������*/
	
	}
    printf("\n");                   /*�������*/
    return 0;                       /*�������*/
}