#include <stdio.h>
#include<process.h>
struct address_list											/*����ṹ��洢ѧ���ɼ���Ϣ*/
{
    char name[10];
    char adr[20];
    char tel[15];
} info[100];
void save(char *name, int n)									/*�Զ��庯��save*/
{
    FILE *fp;										/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    int i;
    if ((fp = fopen(name, "wb")) == NULL)						/*��ֻд��ʽ��ָ���ļ�*/
    {
        printf("cannot open file\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
        if (fwrite(&info[i], sizeof(struct address_list), 1, fp) != 1)		/*��һ�����������fp��ָ���ļ���*/
            printf("file write error\n");							/*���д���ļ����ɹ������������*/
    fclose(fp);												/*�ر��ļ�*/
}
void show(char *name, int n)							/*�Զ��庯��show*/
{
    int i;
    FILE *fp;										/*����һ��ָ��FILE���ͽṹ���ָ�����*/
    if ((fp = fopen(name, "rb")) == NULL)					/*��ֻ����ʽ��ָ���ļ�*/
    {
        printf("cannot open file\n");
        exit(0);
    } 
    for (i = 0; i < n; i++)
    {
        fread(&info[i], sizeof(struct address_list), 1, fp);	/*��fp��ָ����ļ��������ݴ浽����score��*/
        printf("%15s%20s%20s\n", info[i].name, info[i].adr,info[i].tel);
    }
    fclose(fp);										/*��ֻд��ʽ��ָ���ļ�*/
}
void main()
{
    int i, n;									/*��������Ϊ��������*/
    char filename[50];							/*����Ϊ�ַ���*/
    printf("how many ?\n");
    scanf("%d", &n);								/*����ѧ����*/
    printf("please input filename:\n");
    scanf("%s", filename);							/*�����ļ�����·��������*/
    printf("please input name,address,telephone:\n");
    for (i = 0; i < n; i++)							/*����ѧ���ɼ���Ϣ*/
    {
        printf("NO%d", i + 1);
        scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
        save(filename, n);							/*���ú���save*/
    }
    show(filename, n);							/*���ú���show*/
}