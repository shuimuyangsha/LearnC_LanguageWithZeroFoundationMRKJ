#include<stdio.h>
int main()
{
	int iIndex;								/*循环控制变量*/
	char cArray[33]="Education is the door to freedom";			/*定义字符数组用于保存字符串*/

	for(iIndex=0;iIndex<33;iIndex++)
	{
		printf("%c",cArray[iIndex]); 		/*逐个输出字符数组中的字符*/
	}
	printf("\n"); 		/*直接将字符串输出*/
	return 0;
}
