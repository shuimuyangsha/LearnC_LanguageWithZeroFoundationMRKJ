#include<stdio.h>
#include<math.h>		/*包含头文件math.h*/

int main()
{ 
	double fResultTan;	/*用来保存正切值*/

	int Result;	
	Result=90+45; 
	fResultTan =atan(Result);	/*调用正切函数*/
	printf("另一个内角是:%d\n",Result);
    printf("反正切值是：%f\n",fResultTan);
	return 0;
}
   
