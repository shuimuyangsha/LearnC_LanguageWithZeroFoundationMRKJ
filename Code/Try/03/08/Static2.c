#include <stdio.h>
void click()
{
	static int sum = 0;
	sum = sum +1;
	printf("此时点击率：%d\n",sum);
}

void main()
{ 
    click();
    click();
    click();
    click();
    click();

}