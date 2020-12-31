#include <stdio.h>   /*标准输入输出函数库*/
#include <stdlib.h> /*标准函数库*/
#include <string.h> /*字符串函数库*/
#include <conio.h>    /*屏幕操作函数库*/
#define HEADER1 " -------------------------------BOOK-------------------------------------------\n"
#define HEADER2 " |  number  |    name       |price|   author      | publishing company |number|\n"
#define HEADER3 " |----------|---------------|-----|---------------|---------------------------|\n"
#define HEADER4 " -------------------------------Member----------------------------------------\n"
#define HEADER5 " |  number  |    name       |   telephone   |\n"
#define HEADER6 " |----------|---------------|---------------|\n"
#define HEADER7 " |  mnumber |  member name  | bnumber  |   book name   |\n"
#define HEADER8 " |----------|---------------|----------|---------------|\n"
#define HEADER9 " |-----------------borrow book-------------------------|\n"
#define FORMAT  " |%-10s|%-15s|%5d|%-15s|%-20s|%5d |\n"
#define FORMAT1  " |%-10s|%-15s|%-15s|\n"
#define FORMAT2  " |%-10s|%-15s|%-10s|%-15s|\n"
#define DATA p->data.num,p->data.name,p->data.price,p->data.author,p->data.pub,p->data.number
#define END     " ------------------------------------------------------------------------\n"
#define N 100
typedef struct book
{
char num[10];   /*书号*/
char name[15]; /*书名*/
int  price;     /*定价*/
char author[15];     /*作者*/
char pub[20];     /*出版社*/
int number;/*数量*/
};

typedef struct Member
{
char mnum[10];/*会员号*/
char mname[15];/*会员姓名*/
char tel[15];/*联系电话*/
};
typedef struct borrow
{
char mnum[10];/*会员号*/
char mname[15];/*会员姓名*/
char num[10];/*书号*/
char name[15];/*书名*/
};

typedef struct node/*定义图书信息链表的结点结构*/
{
struct book data; /*数据域*/
struct node *next;    /*指针域*/
}Node,*Link;   /*定义node类型的结构变量及指针变量*/

typedef struct mnode/*定义会员信息链表的结点结构*/
{
struct Member inf;
struct mnode *next;
}Mnode,*Mlink;
typedef struct bnode/*定义借书信息链表的结点结构*/
{
struct borrow binf;
struct bnode *next;
}Bnode,*Blink;
void menu() /*主菜单*/
{
system("cls");   /*清屏*/
printf("                   Book  Management  System \n");

printf("\t*************************Menu**********************************\n");

printf("\t*	1 Add       book             2 delete   book          *\n");

printf("\t*	3 search    book             4 modify record          *\n");

printf("\t*	5 Add  member                6 borrow   book          *\n");

printf("\t*	7 return   book              8 save   book            *\n");

printf("\t*	9 save member                0 quit   system          *\n");

printf("\t***************************************************************\n");

}
void printheader() /*格式化输出表头*/
{
printf(HEADER1);
printf(HEADER2);
printf(HEADER3);
}
void printdata(Node *pp) /*格式化输出表中数据*/
{
Node* p;
p=pp;
printf(FORMAT,DATA);

}

void Wrong() /*输出按键错误信息*/
{
printf("\n\n\n\n\n***********Error:input has wrong! press any key to continue**********\n");
getchar();
}

void Nofind() /*输出未查找此学生的信息*/
{
printf("\n=====>Not find this record!\n");
}

void Disp(Link l) /*显示单链表l中存储的图书记录*/
{
Node *p;
p=l->next;

if(!p) /*p==NULL则说明暂无记录*/
{
printf("\n=====>Not  record!\n");
getchar();
return;
}

printf("\n\n");
printf(HEADER1);
printf(HEADER2);
printf(HEADER3);

while(p)    /*逐条输出链表中存储图书信息*/
{
printf(FORMAT,DATA);
p=p->next;
printf(HEADER3);
}
getchar();
}
void Mdisp(Mlink m) /*显示单链表中存储的会员信息*/
{
Mnode *p;
p=m->next;

if(!p) /*p==NULL证明没有会员记录*/
{
printf("\n=====>Not  record!\n");
getchar();
return;
}

printf("\n\n");
printf(HEADER4);
printf(HEADER5);
printf(HEADER6);

while(p)    /*逐条输出链表中存储的会员信息*/
{
printf(FORMAT1,p->inf.mnum,p->inf.mname,p->inf.tel);
p=p->next;
printf(HEADER6);
}
getchar();
}
Node* Locate(Link l,char findmess[],char nameornum[])
{
Node *r;
if(strcmp(nameornum,"num")==0) /*按书号查询*/
{
r=l->next;
while(r)
{
   if(strcmp(r->data.num,findmess)==0)
    return r;/*返回与输入内容相匹配的结点*/
   r=r->next;
}
}
else if(strcmp(nameornum,"name")==0) /*按书名查询*/
{
r=l->next;
while(r)
{
   if(strcmp(r->data.name,findmess)==0)
    return r;/*返回与输入内容相匹配的结点*/
   r=r->next;
}
}
return 0; /*若未找到，返回一个空指针*/
}

void stringinput(char *t,int lens,char *notice)/*输入字符串，并进行长度验证*/
{
   char n[50];
   do{
      printf(notice); /*显示提示信息*/
      scanf("%s",n); /*输入字符串*/
      if(strlen(n)>lens)printf("\n exceed the required length! \n"); /*进行长度是否超过规定值*/
     }while(strlen(n)>lens);
   strcpy(t,n); /*将输入的字符串拷贝到字符串t中*/
}
int numberinput(char *notice)
{
int t=0;
   do{
      printf(notice); /*显示提示信息*/
      scanf("%d",&t); /*输入图书数量*/
      if (t<0) printf("\n price must >0! \n");
   }while(t<0);
   return t;
}

void Add(Link l)/*增加图书记录*/
{
Node *p,*r,*s;
char ch,flag=0,num[10];
r=l;
s=l->next;
system("cls");
Disp(l); /*先输出已有的图书信息*/
while(r->next!=NULL)
r=r->next; /*将指针移至于链表最末尾，准备添加记录*/
while(1) /*可输入多条记录，输入0时退出添加操作*/
{
while(1)
{

stringinput(num,10,"input number(press '0'return menu):"); /*输入书号*/
flag=0;
if(strcmp(num,"0")==0) /*输入0退出操作，返回菜单界面*/
      {return;}
s=l->next;
    while(s) /*查询输入的书号是否已经存在*/
    {
      if(strcmp(s->data.num,num)==0)
      {
       flag=1;
       break;
       }
     s=s->next;
    }

if(flag==1) /*提示用户是否重新输入*/

     { getchar();
        printf("=====>The number %s is  existing,try again?(y/n):",num);
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
         continue;
        else
          return;
      }
     else
      {break;}
}

p=(Node *)malloc(sizeof(Node)); /*申请内存空间*/
if(!p)
   {
      printf("\n allocate memory failure "); /*如没有申请到，输出提示信息*/
      return ;             /*返回菜单界面*/
   }
strcpy(p->data.num,num); /*将字符串拷贝到p->data.num中*/
stringinput(p->data.name,15,"Name:");/*输入图书名称到p->data.name中*/
p->data.price=numberinput("price:");/*输入定价到p->data.price中*/
stringinput(p->data.author,15,"author:");/*输入作者名到p->data.author中*/
stringinput(p->data.pub,20,"publishing company:");/*输入出版社名称到p->data.pub中*/
p->data.number=numberinput("number:");/*输入图书数量到p->data.number中*/
p->next=NULL;
r->next=p; /*将新结点插入链表中*/
r=p;
}
     return ;
}
void Addmember(Mlink m)
{
FILE *fp;
Mnode *p,*r,*s,*q;
char ch,qu,flag=0,num[10];
r=m;
s=m->next;
system("cls");
Mdisp(m);/*将原有记录输出*/
while(r->next!=NULL)
r=r->next; /*将指针移至于链表最末尾，准备添加记录*/
while(1)  /*可输入多条记录，输入0时退出添加操作*/
{
while(1)
{

stringinput(num,10,"input the number of the member(press '0'return menu):"); /*输入会员号*/
flag=0;

if(strcmp(num,"0")==0) /*输入为0，则退出添加操作，返回菜单界面*/
      {return;}
s=m->next;
    while(s) /*查询该会员号是否已经存在*/
    {
      if(strcmp(s->inf.mnum,num)==0)
      {
       flag=1;
       break;
       }
     s=s->next;
    }

if(flag==1) /*提示用户是否重新输入*/

     { getchar();
        printf("=====>The number %s is existing,try again?(y/n):",num);
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
         continue;
        else
          return;
      }
     else
      {break;}
}

p=(Mnode *)malloc(sizeof(Mnode)); /*申请内存空间*/
if(!p)
   {
      printf("\n allocate memory failure "); /*如没有申请到，输出提示信息*/
      return ;             /*返回主界面*/
   }
strcpy(p->inf.mnum,num); /*将会员号拷贝到p->data.num中*/
stringinput(p->inf.mname,15,"Name:");
stringinput(p->inf.tel,15,"Telephone:");
p->next=NULL;
r->next=p; /*将新结点插入链表中*/
r=p;
}
     return ;
}
void search(Link l) /*图书查询*/
{
int select;
char searchinput[20];
Node *p;
if(!l->next) /*若链表为空*/
{
system("cls");
printf("\n=====>No record!\n");
getchar();
return;

}
system("cls");
printf("\n\t1 Search by number \n\t2 Search by name\n");
printf("      please choice[1,2]:");
scanf("%d",&select);
if(select==1)   /*按书号查询*/
{

stringinput(searchinput,10,"input the existing student number:");
p=Locate(l,searchinput,"num");
if(p) /*若p!=NULL*/
{
   printheader();
   printdata(p);
   printf(END);
   printf("press any key to return");
   getchar();
}
else
   Nofind();
   getchar();
}
else if(select==2) /*按书名查询*/
{
stringinput(searchinput,15,"input the existing book name:");
p=Locate(l,searchinput,"name");
if(p)
{
   printheader();
   printdata(p);
   printf(END);
   printf("press any key to return");
   getchar();
}
else
   Nofind();
   getchar();
}
else
Wrong();
getchar();

}

void Del(Link l)/*删除指定的图书记录*/
{
int sel;
Node *p,*r;
char findmess[20];
if(!l->next)
{ system("cls");
printf("\n=====>No record!\n");
getchar();
return;
}
system("cls");
Disp(l);
printf("\n        =====>1 Delete by number       =====>2 Delete by name\n");
printf("       please choice[1,2]:");
scanf("%d",&sel);
if(sel==1)
{
stringinput(findmess,10,"input the existing student number:");
p=Locate(l,findmess,"num");
if(p) /*p!=NULL*/
{
   r=l;
   while(r->next!=p)
    r=r->next;
   r->next=p->next;/*将p所指节点从链表中去除*/
   free(p); /*释放内存空间*/
   printf("\n=====>delete success!\n");
   getchar();
}
else
   Nofind();
   getchar();
}
else if(sel==2) /*先按书名查询*/
{
stringinput(findmess,15,"input the existing book name");
p=Locate(l,findmess,"name");
if(p)
{
   r=l;
   while(r->next!=p)
    r=r->next;
   r->next=p->next;
   free(p);
   printf("\n=====>delete success!\n");
   getchar();
}
else
   Nofind();
   getchar();
}
else
Wrong();
getchar();
}

void Modify(Link l)/*修改图书信息*/
{
Node *p;
char findmess[20];
if(!l->next)
{ system("cls");
printf("\n=====>No book record!\n");
getchar();
return;
}
system("cls");
printf("modify book recorder");
Disp(l);
stringinput(findmess,10,"input the existing book number:");
p=Locate(l,findmess,"num"); /*查询到该节点*/
if(p) /*若p!=NULL,表明已经找到该节点*/
{
printf("Number:%s,\n",p->data.num);
printf("Name:%s,",p->data.name);
stringinput(p->data.name,15,"input book name:");
printf("price:%d,",p->data.price);
p->data.price=numberinput("the price of book:");
printf("Author:%s,",p->data.author);
stringinput(p->data.author,15,"Author:");
printf("Publishing company:%s,",p->data.pub);
stringinput(p->data.pub,15,"Publishing company:");
printf("number:%d,",p->data.number);
p->data.number=numberinput("the number of book:");
printf("\n=====>modify success!\n");
Disp(l);
}
else
Nofind();
getchar();

}

void Save(Link l)/*将数据存盘*/
{
FILE *fp;
Node *p;
int count=0;
fp=fopen("f:\\book","wb");/*以只写方式打开二进制文件*/
if(fp==NULL) /*打开文件失败*/
{
printf("\n=====>open file error!\n");
getchar();
return ;
}
p=l->next;

while(p)
{
if(fwrite(p,sizeof(Node),1,fp)==1)/*写记录到磁盘文件中*/
{
   p=p->next;
   count++;
}
else
{
   break;
}
}
if(count>0)
{
getchar();
printf("\n\n\n\tsave file complete,total saved's record number is:%d\n",count);
getchar();
}
else
{system("cls");
printf("the current link is empty,no student record is saved!\n");
getchar();
}
fclose(fp);
}
void Savemember(Mlink m)
{
FILE *fp;
Mnode *p;
int count=0;
fp=fopen("f:\\member","wb");/*以只写方式打开二进制文件*/
if(fp==NULL) /*打开文件失败*/
{
printf("\n=====>open file error!\n");
getchar();
return ;
}
p=m->next;

while(p)
{
if(fwrite(p,sizeof(Mnode),1,fp)==1)/*写记录到磁盘文件中*/
{
   p=p->next;
   count++;
}
else
{
   break;
}
}
if(count>0)
{
getchar();
printf("\n\n\n\tsave file complete,total saved's record number is:%d\n",count);
getchar();
}
else
{system("cls");
getchar();
}
fclose(fp);
}
void Saveoi(Blink b)
{
FILE *fp;
Bnode *p;
int count=0;
fp=fopen("f:\\borrow","wb");/*以只写方式打开二进制文件*/
if(fp==NULL) /*打开文件失败*/
{
printf("\n=====>open file error!\n");
getchar();
return ;
}
p=b->next;

while(p)
{
if(fwrite(p,sizeof(Bnode),1,fp)==1)/*每次写一条记录或一个节点信息至文件*/
{
   p=p->next;
   count++;
}
else
{
   break;
}
}
if(count>0)
{
getchar();
printf("\n\n\n\n\n=====>save file complete,total saved's record number is:%d\n",count);
getchar();
}
else
{system("cls");
getchar();
}
fclose(fp);
}
void borrow(Link l,Mlink m,Blink b)/*借书*/
{
Mnode *p;
Node *q;
Bnode *t,*s,*k;
char number[10],booknum[10];
system("cls");
t=b->next; 

if(!t)
{
printf("\n=====>Not  record!\n");
}

printf("\n\n");
printf(HEADER9);
printf(HEADER7);
printf(HEADER8);

while(t) 
{
printf(FORMAT2,t->binf.mnum,t->binf.mname,t->binf.num,t->binf.name);
t=t->next; 
printf(HEADER8);
}
while(1)
{
s=b;
p=m->next;
q=l->next;
while(s->next!=NULL)
s=s->next;
stringinput(number,10,"please input the number of member:");/*输入会员号*/
if(strcmp(number,"0")==0)
break;
do
{
if(strcmp(p->inf.mnum,number)==0)/*查看该会员号是否存在*/
break;
else
p=p->next;
}while(p!=NULL);
stringinput(booknum,10,"please input the number of book:");/*输入书号*/
do
{
if(strcmp(q->data.num,booknum)==0)/*查看书号是否存在*/
break;
else
q=q->next;
}while(q!=NULL);
if(p==NULL)
{
printf("you are not a member!");
return;
}
else
if(q==NULL)
{
printf("the book is not exist!");
return;
}
else
{
if(q->data.number!=0)
{q->data.number--;
k=(Bnode *)malloc(sizeof(Bnode)); /*申请内存空间*/
if(!k)
   {
      printf("\n allocate memory failure "); /*如没有申请到，输出提示信息*/
      return ;             /*返回菜单界面*/
   }
strcpy(k->binf.num,q->data.num);
strcpy(k->binf.name,q->data.name);
strcpy(k->binf.mnum,p->inf.mnum);
strcpy(k->binf.mname,p->inf.mname);
k->next=NULL; 
s->next=k; /*将新结点插入链表中*/
s=k;
}
else
printf("no book!");
}
}
Saveoi(b);/*写记录到磁盘文件中*/
getch();
}
void ret(Link l,Blink b)/*还书*/
{
Bnode *p,*q;
Node *t;
char memnum[10],booknum[10];
q=b;
p=q->next;
t=l->next;
stringinput(memnum,10,"please input the number of member:");
if(strcmp(memnum,"0")==0)
return;
stringinput(booknum,10,"please input the number of book:");
while(p!=NULL)
{
if(strcmp(p->binf.num,booknum)==0&&strcmp(p->binf.mnum,memnum)==0)/*如果书号与会员号都存在则可以还书*/
{
	q->next=p->next;
do
{
if(strcmp(t->data.num,booknum)==0)
break;
else
t=t->next;
}while(t!=NULL);
t->data.number++;/*如果还书成功则可借的数目加1*/
free(p);
}
else
{
q=p;
p=q->next;
}
}
if(p==NULL)
{
printf("input error");
return;
}
Saveoi(b);
getch();
}
main()
{

Link l;      /*定义链表*/
Mlink m;
Blink b;
FILE *fp;    /*文件指针*/
int select;     
char ch;     
int count=0; 
Node *p,*r;  
Mnode *q,*t;
Bnode *s,*k;
b=(Bnode*)malloc(sizeof(Bnode));
if(!b)
   {
      printf("\n allocate memory failure "); /*如没有申请到，打印提示信息*/
      return ;             /*返回菜单界面*/
   }
b->next=NULL;
k=b;

fp=fopen("f:\\borrow","ab+");
if(fp==NULL)
{
    printf("\n=====>can not open file!\n");
    exit(0);
}

while(!feof(fp))
{
s=(Bnode*)malloc(sizeof(Bnode));
if(!s)
   {
      printf(" memory malloc failure!\n");    /*没有申请成功*/
      exit(0);       /*退出*/
   }

if(fread(s,sizeof(Bnode),1,fp)==1) /*从文件中读取借书记录*/
{
   s->next=NULL;
   k->next=s;
   k=s;                          
   }
}
fclose(fp); /*关闭文件*/
m=(Mnode*)malloc(sizeof(Mnode));
if(!m)
   {
      printf("\n allocate memory failure "); /*如没有申请到，输出提示信息*/
      return ;             /*返回菜单界面*/
   }
m->next=NULL;
t=m;

fp=fopen("f:\\member","ab+");
if(fp==NULL)
{
    printf("\n=====>can not open file!\n");
    exit(0);
}

while(!feof(fp))
{
q=(Mnode*)malloc(sizeof(Mnode));
if(!q)
   {
      printf(" memory malloc failure!\n");    /*没有申请成功*/
      exit(0);       /*退出*/
   }

if(fread(q,sizeof(Mnode),1,fp)==1) /*从文件中读取会员信息记录*/
{
   q->next=NULL;
   t->next=q;
   t=q;                          
   }
}
fclose(fp); /*关闭文件*/
l=(Node*)malloc(sizeof(Node));
if(!l)
   {
      printf("\n allocate memory failure "); /*如没有申请到，打印提示信息*/
      return ;             /*返回菜单界面*/
   }
l->next=NULL;
r=l;
fp=fopen("f:\\book","ab+");
if(fp==NULL)
{
    printf("\n=====>can not open file!\n");
    exit(0);
}

while(!feof(fp))
{
p=(Node*)malloc(sizeof(Node));
if(!p)
   {
      printf(" memory malloc failure!\n");    /*没有申请成功*/
      exit(0);       /*退出*/
   }

if(fread(p,sizeof(Node),1,fp)==1) /*从文件中读取图书信息记录*/
{
   p->next=NULL;
   r->next=p;
   r=p;             
   count++;
   }
}

fclose(fp);
printf("\n=====>open file sucess,the total records number is : %d.\n",count);
menu();
while(1)
{
   system("cls");
   menu();
   p=r;
   printf("\n              Please Enter your choice(0~9):");    /*显示提示信息*/
   scanf("%d",&select);

switch(select)
{
case 0:exit(1);
case 1:Add(l);break;           
case 2:Del(l);break;           
case 3:search(l);break;          
case 4:Modify(l);break;      
case 5:Addmember(m);break; 
case 6:borrow(l,m,b);break;
case 7:ret(l,b);break;
case 8:Save(l);break;        
case 9:Savemember(m);break;        
default: Wrong();getchar();break;       
}
}
} 
