#include "stdio.h"/*����ͷ�ļ�*/
#include <string.h>

struct sea/*�������ڵĽṹ��*/ 
 {
    char name[64];
 };
union season /*�������ڵĹ�����*/
{
   struct sea p;    
 };
int main()/*������main*/
{
 union season s;/*���干�������*/
  strcpy(s.p.name, "�ļ�");
 printf("������%s\n",s.p.name);/*�����Ϣ*/
  return 0;/*�������*/
}
