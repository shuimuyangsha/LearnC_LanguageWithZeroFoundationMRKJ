#include <stdio.h>

int main()
{
	int i;
	char String[7]  = {"mrsoft"};
	char Reverse[7] = {0};
	int size;
	size = sizeof(String);	/*计算源字符串长度*/

	/*循环读取字符*/
	for(i=0;i<6;i++)
	{
		Reverse[size-i-2] = String[i];	/*向目标字符串中插入字符*/
	}

	/*输出源字符串*/
	printf("输出源字符串：%s\n",String);
	/*输出目标字符串*/
	printf("输出目标字符串：%s\n",Reverse);

	return 0;						/*程序结束*/
}

