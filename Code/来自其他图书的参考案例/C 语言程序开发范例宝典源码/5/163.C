#include <stdio.h>
main()
{
    float e = 1.0, n = 1.0;								/*定义e和n为单精度型，并为它们赋初值为-1*/
    int i = 1; 										/*定义i为基本整型并赋初值为1*/
    while (1 / n > 1e-10)								/*当该项的值不小于10-10时，执行循环体中内容*/
    {
        e += 1 / n; 									/*累加各项的和*/
        i++;
        n = i * n; 									/*求阶层*/
    }
    printf("the value of e is %f", e); 						/*将最终结果输出*/
} 
