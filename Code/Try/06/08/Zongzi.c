#include<stdio.h>
int main()
{
    int num1,num2;                                     /*定义变量num1表示选择的甜的还是咸的粽子，num2表示种类的价格*/
    printf("数字1表示甜粽子，否则就是咸粽子\n");
    scanf("%d,%d",&num1,&num2);                        /*输入的口味和选择的钱数*/
    if(num1==1)                                        /*判断选择什么口味*/
    {
     if(num2>=5&&num2<10)                              /*根据输入的数据选择哪种商品*/                                        
         printf("您可以吃到5元的甜粽子\n");
     else if(num2>=10)
         printf("您可以吃到10元的甜粽子\n");
     else 
         printf("您不可以吃到甜粽子\n"); 
    }
      else
      {
        if(num2>=4&&num2<12)
         printf("您可以吃到4元的咸粽子\n");
         else if(num2>=12)
         printf("您可以吃到12元的咸粽子\n");
        else 
         printf("您不可以吃到咸粽子\n");
      }
      return 0;
}