#include <stdio.h>
#include <time.h>

int main()
{
	int command[4] = {0,1,2,3};			/*定义一个数组*/
	int num;
	struct tm *sysTime;
	printf("如需帮助可输入数字0！\n");				/*输出字符串*/
	printf("请输入命令符：\n");						/*输出字符串*/

	while (1)
	{
		scanf("%d", &num);							/*获得输入数字*/
		/*判断用于输入的字符*/
		if (command[0] == num)						/*如果输入数字0	*/				
		{
			/*输出帮助信息*/
			printf("输入数字1显示系统日期, 输入数字2显示系统时间, 输出字母3退出系统!\n");
		}
		else if (command[1] == num)					/*如果是命令数字1*/
		{
			time_t nowTime;
			time(&nowTime);							/*获取系统日期*/
			sysTime= localtime(&nowTime);			/*转换为系统日期*/
			printf("系统日期：%d-%d-%d \n",1900 + sysTime->tm_year,sysTime->tm_mon + 1
					,sysTime->tm_mday);				/*输出信息*/
		}
		else if (command[2] == num)					//如果是命令数字2*/
		{
			time_t nowTime;
			time(&nowTime);							/*获取系统时间*/
			sysTime = localtime(&nowTime);			/*转换为系统时间*/
			printf("系统时间：%d:%d:%d \n",sysTime->tm_hour ,sysTime->tm_min 
					,sysTime->tm_sec);				/*输出信息*/
		}
		else if (command[3] == num)
		{
			return 0;								/*退出系统*/
		}
		printf("请输入命令符：\n");					/*输出字符串*/
	}

	return 0;										/*程序结束*/
}

