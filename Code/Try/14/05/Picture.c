#include<stdio.h>
#define TEM 235 
int main()
{
	 
    #if TEM==235
         printf("�崿��\n");		
    #elif TEM==399 							
       printf("�������\n");
       #elif TEM==599
       printf("˫���գ������գ������գ�\n");
       #elif TEM==1999 
       printf("��ɴ��\n");
    #else
         printf("û������������\n");			
    #endif
    return 0;
}
