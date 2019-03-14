#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void object();
void object1();
main()
{
   int a=DETECT,b;
   clrscr();
   initgraph(&a,&b,"");

   object1();
   getch();
   closegraph();
}
void object()
{
  int a=300,b=230;
  rectangle(a,b,a+46,b+60);
  rectangle(a-20,b+4,a-10,b+40);
  rectangle(a+56,b+4,a+66,b+40);
  rectangle(a+10,b+60,a+20,b+90);
  rectangle(a+30,b+60,a+40,b+90);
  circle(a+23,b-20,15);
  circle(a+23-6,b-20-4,2);
  circle(a+23+6,b-20-4,2);
}
void object1()
{
    int a=300+100,b=230;
  rectangle(a,b,a+46,b+60);
//  rectangle(a-20,b+4,a-10,b+40);
  line(a-20,b+4,a-10,b+10);
  line(a-20,b+4,a-45,b+40);
  line(a-10,b+10,a-36,b+47);
  line(a-45,b+40,a-36,b+47);

  //rectangle(a+56,b+4,a+66,b+40);
  line(a+56,b+10,a+66,b+4);
  line(a+56,b+10,a+66,b+40);
  line(a+66,b+4,a+88,b+50);
  line(a-45,b+40,a-36,b+47);
  rectangle(a+10,b+60,a+20,b+90);
  rectangle(a+30,b+60,a+40,b+90);
  circle(a+23,b-20,15);
  circle(a+23-6,b-20-4,2);
  circle(a+23+6,b-20-4,2);
}