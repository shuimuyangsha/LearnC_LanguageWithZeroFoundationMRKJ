#include "stdio.h"
typedef struct student
{
    char num;
    struct student *next;
} LNode,  *LinkList;
LinkList create(void)
{
    LinkList head;
    LNode *p1;
    char a;
    head = NULL;
    printf("Please input the linklist's records:\n");
    a = getchar();
    while (a != '\n')
    {
        p1 = (LinkList)malloc(sizeof(LNode)); /*����ռ�*/
        p1->num = a; /*������ֵ*/
        p1->next = head;
        head = p1;
        a = getchar();
    }
    return head;
}

main()
{
    LinkList L1;

    L1 = create();
    printf("The linklist is:\n");
    while (L1)
    {
        printf("%c ", L1->num);
        L1 = L1->next;
    }
    getch();
}
