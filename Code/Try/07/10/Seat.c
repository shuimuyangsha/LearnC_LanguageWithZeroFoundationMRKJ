#include<stdio.h>                                       /*����ͷ�ļ�*/
int main()                                              /*������main*/
{
     int line,list;                                     /*������������*/
	 printf("the theatre seats available informain:\n");/*�����ʾ��Ϣ*/
     
		for (line = 1; line <= 4; line++)               /*��������*/
        {
			for (list = 1; list <= 10; list++)          /*��������*/
            {
				if (list == 1 || list == 10)            /*��������һ�к�����һ�в���*/
                {
					continue;                           /*ʹ��continue����*/
				} 
                else 
                {
					printf("the %d column %d available\n",line,list);/*�����ʾ��Ϣ�ĸ���λ���Գ���*/
				}
			}
		}
    return 0;                                            /*�������*/
}
