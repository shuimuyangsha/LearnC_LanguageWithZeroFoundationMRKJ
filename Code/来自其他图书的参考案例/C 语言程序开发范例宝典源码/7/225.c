#include<stdio.h>
#include<dos.h> 
main() 
{ 
   printf("\n The status of Ctrl+Break %s",(getcbrk())?"On":"Off");/*��⵱ǰctrl+break״̬�����*/
   printf("\npress any key to see the status of Ctrl+Break:");
   getch();
   setcbrk(1);/*����ctrl+break״̬Ϊon*/
   printf("\n The status of Ctrl+Break %s",(getcbrk())?"On":"Off");/*��⵱ǰctrl+break״̬�����*/
   printf("\npress any key to see the status of Ctrl+Break:");
   getch();
   setcbrk(0);/*����ctrl+break״̬Ϊoff*/
   printf("\n The status of Ctrl+Break %s\n",(getcbrk())?"On":"Off");/*��⵱ǰctrl+break״̬�����*/
} 
