#include<stdio.h>
int palindrome();
int main()
{
    palindrome();
    return 0;
}
int palindrome()
{
    int a,temp,n=0;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        n+=a%10;
        a/=10;
        n*=10;
    }
    if(temp==n/10)
    {
         printf("�ǻ�����\n");
         return 1;
    }
    else 
    {
         printf("���ǻ�����\n");
       return 0;
    }
}