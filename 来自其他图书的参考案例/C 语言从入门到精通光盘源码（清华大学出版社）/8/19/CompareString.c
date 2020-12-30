#include<stdio.h>
#include<string.h>

int main()
{
	char user[20]     = {"mrsoft"};
	char password[20] = {"mrkj"};
	char ustr[20],pwstr[20];
	int i=0;

	while(i < 3)
	{
		printf("输入用户名字符串:\n");
		gets(ustr); 										/*输入用户名字符串*/
		printf("输入密码字符串:\n");
		gets(pwstr); 										/*输入密码字符串*/
		if(strcmp(user,ustr))								/*如果用户名字符串不相等*/
		{
			printf("用户名字符串输入错误！\n");					/*提示用户名字符串输入错误*/
		}
		else												/*用户名字符串相等*/
		{
			if(strcmp(password,pwstr))						/*如果密码字符串不相等*/
			{
				printf("密码字符串输入错误！\n");			/*提示密码字符串输入错误*/
			}
			else											/*用户名和密码字符串都正确*/
			{
				printf("欢迎使用！\n");						/*输出欢迎字符串*/
				break;
			}
		}
		i++;
	}
	if(i == 3)
	{
		printf("输入字符串错误3次！\n");					/*输入字符串错误3次*/
	}

	return 0;												/*程序结束*/
}

