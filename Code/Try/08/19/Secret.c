#include<stdio.h>
#include<string.h>

int main()
{
	char password[20] = {"574824"};
	char pwstr[20];
	int i=0;

	while(i < 3)
    {									 
		printf("ÊäÈëÃÜÂë×Ö·û´®:\n");
		gets(pwstr); 										/*ÊäÈëÃÜÂë×Ö·û´®*/
			if(strcmp(password,pwstr))						/*Èç¹ûÃÜÂë×Ö·û´®²»ÏàµÈ*/
			{
				printf("ÃÜÂë×Ö·û´®ÊäÈë´íÎó£¡\n");			/*ÌáÊ¾ÃÜÂë×Ö·û´®ÊäÈë´íÎó*/
			}
			else											/*ÃÜÂë×Ö·û´®¶¼ÕýÈ·*/
			{
				printf("ÃÜÂëÕýÈ·£¬ÇëÑ¡Ôñ·þÎñ£¡\n");			/*Êä³ö×Ö·û´®*/
				break;
			}
		
		i++;
	}
	if(i == 3)
	{
		printf("ÊäÈë×Ö·û´®´íÎó3´Î£¡Çëµ½ÈË¹¤´¦°ìÀí½âËø\n");	/*ÊäÈë×Ö·û´®´íÎó3´Î*/
	}

	return 0;												/*³ÌÐò½áÊø*/
}

