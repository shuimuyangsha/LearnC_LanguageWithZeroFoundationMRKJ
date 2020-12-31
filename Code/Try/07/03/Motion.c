#include<stdio.h>
void main()
 {
    int coinNum = 0,choice;
    printf("正在售卖的饮料及其价格：\n");
    printf("正在售卖的饮料及其价格：1：3元      2：5元      3：7元\n");
    printf("请输入要购买的饮料编号：\n");
    scanf("%d",&choice);
switch (choice) {
		case 1:
              printf("本自动售卖机仅支持1元硬币支付，请投币：\n");
			do {
			  
				int input=0;
                scanf("%d",&input);
				if (input > 1) 
                {
					printf("请您投入1元硬币！\n");
				} else 
                {
					coinNum = coinNum + input;
					if (coinNum <3) 
                    {
						printf("少于3元！请继续投币……\n");
					}
				}
			} while (coinNum < 3);
			        printf("已支付全款！请拿走您的饮料。\n");
			break;
		case 2:
            printf("本自动售卖机仅支持1元硬币支付，请投币：\n");
			do {
				
				int input=0 ;
                scanf("%d",&input);
				if (input > 1) 
                {
					printf("请您投入1元硬币！\n");
				} else 
                {
					coinNum = coinNum + input;
					if (coinNum <5) 
                    {
						printf("少于5元！请继续投币……\n");
					}
				}
			} while (coinNum < 5);
			printf("已支付全款！请拿走您的饮料。\n");
			break;
		case 3:
            printf("本自动售卖机仅支持1元硬币支付，请投币：\n");
			do {
				int input=0;
                scanf("%d",&input);
				if (input > 1) {
					printf("请您投入1元硬币！\n");
				} else {
					coinNum = coinNum + input;
					if (coinNum <7) {
						printf("少于7元！请继续投币……\n");
					}
				}
			} while (coinNum < 7);
			printf("已支付全款！请拿走您的饮料。\n");
			break;
		default:
			printf("操作有误！请重新操作……\n");
			break;


    }
    
}
