#include<stdio.h>
main()
{	char Key,CMoney;
	int password,password1=123,i=1,a=1000;					/*定义变量*/
	while(1)
	{
		do{
		clrscr();
			printf("*************************\n");
			printf("*  Please select key:      *\n");
			printf("*  1. password           *\n");
			printf("*  2. get money          *\n");
			printf("*  3. Return             *\n");
			printf("*************************\n");
			Key = getch();
		}while( Key!='1' && Key!='2' && Key!='3' );	
		/*当输入值不是1、2、3中任意值时显示do循环体中的内容*/
		switch(Key)
		{
			case '1':									/*但输入值为1时执行case1*/
			clrscr();
				do
				{
				i++;
				printf("    please input password   ");
				scanf("%d",&password);
				if(password1!=password)					/*如果输入密码不正确，执行下面语句*/
				{
                       if(i>3)								/*如果三次密码输入均不正确将退出程序*/
					{
					 printf(" Wrong! Press any key to exit...  ");
					 getch();
					 exit(0);
					}
					else
					puts("wrong,try again");				/*输入次数未到三次，可继续输入*/
				}
				}
				while(password1!=password&&i<=3);			
		/*如果密码不正确且输入次数小于等于3次，执行do循环体中语句*/
				printf("OK! Press any key to continue...  ");		/*密码正确返回初始界面开始其他操作*/
				getch();
				break;
			case '2':									/*输入值为2时执行case2*/
				do{
					clrscr();
					if(password1!=password)				
		/*如果在case1中密码输入不正确将无法进行后面操作*/
					{printf("please logging in,press any key to continue...");
					getch();
					break;}
					else
					{printf("*********************************\n");
					printf("   Please select:\n");
					printf("*   1. $100                      *\n");
					printf("*   2. $200                      *\n");
					printf("*   3. $300                      **\n");
					printf("*   4. Return                    *\n");
					printf("**********************************\n");
					CMoney = getch();                      }
				}while( CMoney!='1' && CMoney!='2' && CMoney!='3'&&CMoney!='4');	
		/*但输入值不是1，2，3，4中任意数将继续执行do循环体中语句*/
				switch(CMoney)
				{
					case '1':							/*输入1时执行case1中的操作*/
						clrscr();
						a=a-100;
						printf("******************************************\n");
						printf("*  Your Credit money is $100,Thank you!  *\n");
						printf("*          The balance is $%d.           *\n",a);
						printf("*         Press any key to return...     *\n");
						printf("******************************************\n");
						getch();
						break;
					case '2':
						clrscr();						/*输入2时执行case2中的操作*/
						a=a-200;
						printf("******************************************\n");
						printf("*  Your Credit money is $200,Thank you!  *\n");
						printf("*            The balance is $%d.         *\n",a);
						printf("*         Press any key to return...     *\n");
						printf("******************************************\n");
						getch();
						break;
					case '3':							/*输入3时执行case3中的操作*/
						clrscr();
						a=a-300;
						printf("******************************************\n");
						printf("*  Your Credit money is $300,Thank you!   *\n");
						printf("*              the balance is $%d         *\n",a);
						printf("*          Press any key to return...     *\n");
						printf("******************************************\n");
						getch();
						break;
					case '4':							/*输入4时执行case4中的操作*/
						break;  }
						break;
			case '3':
				printf("******************************************\n");
				printf("*   Thank you for your using!                *\n");
				printf("*            Goodbye!                    *\n");
				printf("******************************************\n");
				getch();
			     break;
		}
		break;
	}
}
