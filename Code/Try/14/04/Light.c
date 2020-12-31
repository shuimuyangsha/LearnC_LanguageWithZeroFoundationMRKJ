#include "stdio.h"
#define iInput 3
int main()
{
#if iInput==1 
    printf("ºìµÆÍ£\n");
#else
   #if iInput==2
	    printf("ÂÌµÆÐÐ\n", iInput);
  #else	
    printf("»ÆµÆµÈ´ý\n", iInput);
#endif
#endif
   
	return 0;
}
