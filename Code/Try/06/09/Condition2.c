#include<stdio.h>
int main()
{
    int day,fee;                                    /*���������day��������fee����������*/
     
    scanf("%d",&day);                               /*��������*/
       fee=(day<30)?day:day*0.75;                   /*������������*/  
        printf("���������ǣ�%d\n",fee);
      return 0;
}