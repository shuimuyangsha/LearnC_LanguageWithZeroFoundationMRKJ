#include<stdio.h>               /*����ͷ�ļ�*/
#define TEM 37                  /*����궨��*/
int main()                      /*������main*/
{
	 
    #if TEM>37                  /*�ж��¶�*/
         printf("����\n");      /*�����Ϣ*/		
    #elif TEM<36                /*�ж��¶�*/							
       printf("����\n");        /*�����Ϣ*/	
    #else
         printf("��������\n");	/*�����Ϣ*/		
    #endif
	printf("��ǰ�¶���:%d\n",TEM);/*�����ǰ�¶�*/
    return 0;                   /*�������*/
}
