#include "stdio.h"                          /*����ͷ�ļ�*/
#define iInput 19054                        /*�궨��*/
int main()                                  /*������main*/
{	
     printf("��ǰ�ǣ�%d\n", iInput);         /*��ʾ���*/
#if iInput>0                                /*�ж�����*/
    
	if(iInput % 9527==0 && iInput %2 == 0)  /*�жϱ���������*/
      printf("�ܱ�9527������ż��\n");       /*�����Ϣ*/
#else 
   #if iInput<0  
	    printf("��ǰΪ������%d\n", iInput); /*������*/
  #else	
    printf("��ǰΪ��%d\n", iInput);         /*��ʾ���*/
#endif 
#endif 
  
	return 0;                               /*�������*/
}
