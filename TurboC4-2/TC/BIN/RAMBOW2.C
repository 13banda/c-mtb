#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
      int a=DETECT,b,i,j;
      clrscr();
      initgraph(&a,&b,"");
      for(i=150;i<250;i++)
      {  //here logic is that ki ager i jab tak nayi value nahi lega tab tak vahi chalega
	 setcolor(i/5-1);

      arc(getmaxx()/2,getmaxy()/2+100,0,180,i);
      delay(200);
      }
      getch();
      closegraph();
      }