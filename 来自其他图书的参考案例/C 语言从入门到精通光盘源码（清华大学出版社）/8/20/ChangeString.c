#include<stdio.h>
#include<string.h>

int main()
{
	char text[20],change[20];
	int num;
	int i=0;

	while(1)
	{
		
		printf("����ת����Сд��ʽ��1��ʾ��д��2��ʾСд��0��ʾ�˳���:\n");
		scanf("%d", &num);	
		if(num == 1)								/*�����ת��Ϊ��д*/
		{
			printf("����һ���ַ���:\n");
			scanf("%s", &text); 								/*����Ҫת�����ַ���*/
			strcpy(change,text);								/*����Ҫת�����ַ���*/
			strupr(change);								/*�ַ���ת����д*/
			printf("ת���ɴ�д��ĸ���ַ���Ϊ:%s\n",change);		/*���ת������ַ���*/
		}
		else if(num == 2)									/*�����ת��ΪСд*/
		{
			printf("����һ���ַ���:\n");
			scanf("%s", &text); 								/*����Ҫת�����ַ���*/
			strcpy(change,text);								/*����Ҫת�����ַ���*/
			strlwr(change);							/*�ַ���ת��Сд*/
			printf("ת����Сд��ĸ���ַ���Ϊ:%s\n",change);		/*���ת������ַ���*/
		}
		else if(num == 0)									/*��������ַ�Ϊ0*/
		{
			break;									/*������ǰѭ��*/
		}
	}

	return 0;												/*�������*/
}

