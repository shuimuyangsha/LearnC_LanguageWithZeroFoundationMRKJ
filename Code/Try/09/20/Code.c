#include<stdio.h>
#include<ctype.h>

void SwitchShow(char i,char j,char k)
{
  
	if(isupper(i))			/*�ж��Ƿ��Ǵ�д��ĸ*/
	{
		printf("���ڴ�д��ĸ\n");
	}

   if(islower(j))						/*�ж��Ƿ���Сд��ĸ*/
	{
		printf("����Сд��ĸ\n");
	}
   if(isdigit(k))                       /*�ж��Ƿ�������*/
   {
       printf("��������\n");
   }
   printf("���밲ȫ\n");
}

int main()
{
	 
    SwitchShow('A','b','1');        /*��������*/
    return 0;						/*�������*/
}



