#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
  int a=DETECT,b;
  clrscr();
  initgraph(&a,&b,"");
  setbkcolor(13);
 // printf("press any key to exit...!");
    circle(300,250,130);

   // setfillstyle(1,YELLOW);
   // floodfill(170,230,WHITE);
    setcolor(GREEN);
    settextstyle(500,2000,50);
  outtextxy(210,419,"press any key to exit...!");
   //printf("\npress enter any key to exit...!");

  getch();
  closegraph();
}