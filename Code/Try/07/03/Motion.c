#include<stdio.h>
void main()
 {
    int coinNum = 0,choice;
    printf("�������������ϼ���۸�\n");
    printf("�������������ϼ���۸�1��3Ԫ      2��5Ԫ      3��7Ԫ\n");
    printf("������Ҫ��������ϱ�ţ�\n");
    scanf("%d",&choice);
switch (choice) {
		case 1:
              printf("���Զ���������֧��1ԪӲ��֧������Ͷ�ң�\n");
			do {
			  
				int input=0;
                scanf("%d",&input);
				if (input > 1) 
                {
					printf("����Ͷ��1ԪӲ�ң�\n");
				} else 
                {
					coinNum = coinNum + input;
					if (coinNum <3) 
                    {
						printf("����3Ԫ�������Ͷ�ҡ���\n");
					}
				}
			} while (coinNum < 3);
			        printf("��֧��ȫ��������������ϡ�\n");
			break;
		case 2:
            printf("���Զ���������֧��1ԪӲ��֧������Ͷ�ң�\n");
			do {
				
				int input=0 ;
                scanf("%d",&input);
				if (input > 1) 
                {
					printf("����Ͷ��1ԪӲ�ң�\n");
				} else 
                {
					coinNum = coinNum + input;
					if (coinNum <5) 
                    {
						printf("����5Ԫ�������Ͷ�ҡ���\n");
					}
				}
			} while (coinNum < 5);
			printf("��֧��ȫ��������������ϡ�\n");
			break;
		case 3:
            printf("���Զ���������֧��1ԪӲ��֧������Ͷ�ң�\n");
			do {
				int input=0;
                scanf("%d",&input);
				if (input > 1) {
					printf("����Ͷ��1ԪӲ�ң�\n");
				} else {
					coinNum = coinNum + input;
					if (coinNum <7) {
						printf("����7Ԫ�������Ͷ�ҡ���\n");
					}
				}
			} while (coinNum < 7);
			printf("��֧��ȫ��������������ϡ�\n");
			break;
		default:
			printf("�������������²�������\n");
			break;


    }
    
}
