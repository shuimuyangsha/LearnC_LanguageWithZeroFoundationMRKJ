#include<stdio.h>
struct Student							 
{
	char cName[20];						 
	int  iNumber;						 
	 						 
} student[5]={{"面膜",1458792365},
				{"洁面",325656550},
				{"洗发露",324655854},
				{"护发素",256897412},
				{"卸妆膏",155655655}};	 

int main()
{
	int i;					 
	for(i=0;i<5;i++)		 
	{
		printf("NO%d Brand:\n",i+1);	 
		printf("品牌名是: %s, 销量: %d\n",student[i].cName,student[i].iNumber);/*使用变量i做下标，输出数组中的元素数据*/
		printf("\n");		/*空格行*/
	}
	return 0;
}