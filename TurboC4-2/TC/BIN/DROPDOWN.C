#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<bios.h>
#include<dos.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
void bar(int,int,char* []);

main()
{
  int  a=DETECT,b;
  char*s1[100]={"Menu",;

  clrscr();
  initgraph(&a,&b,"");
  setbkcolor(8);
  setcolor(15);
  bar(250,200);
  getch();
  closegraph();
}
void bar(int a,int b)
{        setcolor(8);
    rectangle(a,b,a+100,b+20);
    setfillstyle(1,1);
    floodfill(a+1,b+1,8);
    setcolor(15);
    outtextxy(a+30,b+10,"menu");


  }