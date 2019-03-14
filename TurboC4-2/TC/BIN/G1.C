#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
  int a=DETECT,b;
  clrscr();
  initgraph(&a,&b,"");
  setbkcolor(2);
  for(b=0;b<7;b++)
  {
    setcolor(b);
    circle(12+b,40+b,b);
    setfillstyle(b);
 }
 getch();
 closegraph();
 }