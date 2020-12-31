#include<stdio.h>
int main()
{
char ccArray[5][5] = {
     {'a','b','c','d','e'},
     {'b','a','8','d','d'},
     {'c','d','a','e','c'},
     {'d','j','f','a','b'},
     {'e','d','a','f','a'},
};
						            /*定义一个5行5列的数组*/
	int i,j;						/*定义循环控制变量*/
	for(i=0;i<5;i++)				/*使用循环进行计算对角线*/
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
				printf("对角线上的字符是:%c\n",ccArray[i][j]);	/*输出最后的结果*/
			}
		}
	}

	return 0;
}