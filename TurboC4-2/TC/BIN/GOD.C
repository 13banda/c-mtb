#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<bios.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
main()
{
   int a=DETECT,b,i,key;
   clrscr();
   initgraph(&a,&b,"");
   for(i=0;i>-1;i++)
   {
     if(i==getmaxx())
     {
       i=0;
     }
     printf("k    ");

     if(kbhit())
     {
      switch(_bios_keybrd(_KEYBRD_READ))
      {
	 case 0x11b:
	 {  getch();
	   exit(0);
	   break;
	 }
	 case 0x4800:
	 {
	   printf("kjlkjl     kjlkjlkkklkjlkjlkjkljljlk");
	   break;
	   }
	 }
      }
   }
   getch();
   closegraph();
}