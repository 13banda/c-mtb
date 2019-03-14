#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
   int a=DETECT,b,i;
   clrscr();
   initgraph(&a,&b,"");

   for(i=1;i<320;i++)
   {
      if(i%20==0)
     {
      setcolor(i/20);
     }

     rectangle(i,i,getmaxx()-i,getmaxy()-i);
     delay(30);
   }
   getch();
   closegraph();
   }