#include <stdio.h>
int main()
{
	int i,iTemp,iPos;
    int a[12]={50,90,70,80,75,89,55,100,40,60,45,99};

	/*从小到大排序*/
	for(i=1;i<12;i++) 							/*循环数组中元素*/
	{ 
		iTemp = a[i]; 						/*设置插入值*/
		iPos = i-1; 
		while((iPos>=0) && (iTemp<a[iPos])) 	/*寻找插入值的位置*/
		{ 
			a[iPos+1] = a[iPos]; 				/*插入数值*/
			iPos--; 
		} 
		a[iPos+1] = iTemp; 
	}
printf("巨蟹座与哪个星座匹配，匹配分数由低到高如下：\n");
	/*输出数组*/
	for(i=0;i<12;i++)
	{
		printf("%d\t",a[i]);			/*输出制表位*/
		if(i == 4)					/*如果是第5个元素*/
			printf("\n");		/*输出换行*/
	}

	return 0;						/*程序结束*/
}
