#include <stdio.h>          /*包含头文件*/
int fun(int lim,int aa[])   /*自定义函数*/
{
    int i,j=0,k=0;          /*定义数组下标循环控制*/
    for(i=2;i<lim;i++)      /*判断素数*/
    {
        for(j=2;j<i;j++)
            if(i%j==0) 
                break;
                if(j==i) 
                    aa[k++]=i; 

    }
    return k;                       /*程序结束*/

}
int main()                          /*主函数main*/
{
    int aa[100],i;                  /*定义变量*/
    fun(100,aa);                    /*调用fun()函数*/
    printf("100以内的素数有：\n");  /*显示信息*/
    for(i=0;i<25;i++)               /*循环数组所有素数*/
	{
		
		printf("%d\t",aa[i]);       /*输出满足条件的数*/
	
	}
    printf("\n");                   /*换行输出*/
    return 0;                       /*程序结束*/
}