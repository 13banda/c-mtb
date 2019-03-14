#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<dos.h>
#include<bios.h>
main()
{
   int  a,b;
   textbackground(0);
   clrscr();
   for(a=0;a>=0;a++)
   {   if(kbhit())
       {
	break;
       }
       gotoxy(40,12);
       textcolor(a+1);
       cprintf("%d",a);
       delay(50);
   }
   getch();
}