#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
  int a=DETECT,b,c=250;
  clrscr();
  initgraph(&a,&b,"");
 // setbkcolor(7
  //);
  for(c=0;c<150;c=c+10)

 {
  setcolor(c/10);

     setfillstyle(1,c/10);
     circle(getmaxx()/2,getmaxy()/2,c);
    floodfill(170,230,c/10);

    delay(3000);
   }






	getch();
	closegraph();
 }