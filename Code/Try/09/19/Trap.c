#include<stdio.h>
#include<math.h>		/*����ͷ�ļ�math.h*/

int main()
{ 
	double fResultTan;	/*������������ֵ*/

	int Result;	
	Result=90+45; 
	fResultTan =atan(Result);	/*�������к���*/
	printf("��һ���ڽ���:%d\n",Result);
    printf("������ֵ�ǣ�%f\n",fResultTan);
	return 0;
}
   
