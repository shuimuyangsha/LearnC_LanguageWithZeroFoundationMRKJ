#include<stdio.h>
int main()
{
	int iIndex;								/*循环控制变量*/
	char cArray[12]="MingRi KeJi";			/*定义字符数组用于保存字符串*/

	for(iIndex=0;iIndex<12;iIndex++)
	{
		printf("%c",cArray[iIndex]); 		/*逐个输出字符数组中的字符*/
	}
	printf("\n%s\n",cArray); 		/*直接将字符串输出*/
	return 0;
}
