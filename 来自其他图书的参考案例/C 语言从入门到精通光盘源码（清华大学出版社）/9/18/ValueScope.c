#include<stdio.h>

int main()
{
	/*iNumber1��������������main������*/
	int iNumber1=1;
	if(iNumber1>0)
	{
		/*iNumber2����������if������*/
		int iNumber2=2;
		if(iNumber2>0)
		{
			/*iNumber3����������if������*/
			int iNumber3=3;

			printf("All three number are in scope here %d  %d  %d\n",
				iNumber1,iNumber2,iNumber3);/*��3�����ڴ�������ĺ����������*/
		}
	}
	return 0;
}