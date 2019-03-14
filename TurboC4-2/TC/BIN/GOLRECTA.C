#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void orectangle(int x1,int y1,int x2,int y2)
{
  line(x1,y1+10,x1,y2-10);
  line(x2,y1+10,x2,y2-10);
  line(x1+10,y1,x2-10,y1);
   line(x1+10,y2,x2-10,y2);
   arc(x1+10,y1+10,90,180,10);
  // putpixel(x1+10,y1+10,10);
   arc(x2-10,y1+10,0,90,10);
  // putpixel(x2-10,y1+10,10);
    arc(x1+10,y2-10,180,270,10);
  // putpixel(x1+10,y2-10,10);
    arc(x2-10,y2-10,270,360,10);
  // putpixel(x2-10,y2-10,10);



}
main()
{
  int a=DETECT,b;
  clrscr();
  initgraph(&a,&b,"");
  setbkcolor(0);
  orectangle(150,150,400,300);
// orectangle(150+3,150+3,400-3,300-3);
 rectangle(150+4,150+20,400-4,300-4);
   setfillstyle(1,1);
   floodfill(155,172,15);
   setfillstyle(1,7);
   floodfill(153,155,15);
  getch();
  closegraph();
}