#include <stdio.h>                          /*����ͷ�ļ�*/
int main()                                  /*������main*/
{  
    char cString[2];                        /*����һ���ַ��������*/
    puts("����һ����һ�����ǿ������ԣ�");   /*puts���������Ŀ��Ϣ*/
    puts("A.C   B.C++   C.C#   D.CF");
    gets(cString);                          /*��ȡ�ַ�����ѡ���*/
    puts("������Ĵ��ǣ�");               /*puts���������ʾ��Ϣ*/
    puts(cString);                          /*�����ѡ��*/
    return 0;                               /*�������*/

}