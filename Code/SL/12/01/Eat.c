#include "stdio.h"/*����ͷ�ļ�*/
#include<string.h>
 

  /*��ʾ�ҽṹ��*/
  struct peaches {
    char name[64];
  };

  /*��ʾҬ�ӽṹ��*/
  struct coconut  {
    char name[64];
  };

 /*��ʾɽ髽ṹ��*/
  struct hawthorn {
    char name[64];
  };


  // /*��ʾ��ͷ������*/
  union tin {
  struct  peaches p;
  struct  coconut c;
  struct  hawthorn h;
  };
int main()                  /*������main*/
{
  union tin t;              /*����һ��������*/
  strcpy(t.p.name, "��");   /*����Ӧ�����ָ��Ƹ���Ӧ�ı���*/
  strcpy(t.c.name, "Ҭ��");
  strcpy(t.h.name, "ɽ�");

printf("�����ͷƿװ%s\n",t.p.name);/*�����Ϣ*/
  
  return 0;                         /*�������*/
}
