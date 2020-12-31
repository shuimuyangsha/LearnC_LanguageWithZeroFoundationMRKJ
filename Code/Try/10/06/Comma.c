#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Life is brief, and then you die, you know£¿";
    char *p=str;
    int n=strlen(str);
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)==',')
        {
        printf("£¬µÄÎ»ÖÃÊÇ£º%d\n",i);
        }
    }
        
           
        return 0;

}