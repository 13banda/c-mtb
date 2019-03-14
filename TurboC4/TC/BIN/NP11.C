#include<stdio.h>     //project given by Hement sir
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
#include<bios.h>
int built();
void object(int ,int);
void object1(int,int);
void background();
main(void)
{
   int a=DETECT,b,i;
   clrscr();
   initgraph(&a,&b,"");
   setbkcolor(0);
   background();

  built();



   getche();
   closegraph();
}

int built()
{
	  int i,j,key;

	  setlinestyle(SOLID_LINE,1,3);

	  for(i=1;i>0;i++)
	  {
	   if(i==getmaxx())
	   {
	     i=1;
	   }
	   setcolor(YELLOW);
	   moveto(i+10,260);
	   lineto(i,260);
	   delay(7);
	   setcolor(BLACK);
	   lineto(i+1,260);

	   if(kbhit())
	   {
	    key = _bios_keybrd(_KEYBRD_READ);
	    if(key==0x11b)
	    {
	       exit(0);
	    }
	    if(key==0x4800)
	    {
	      setcolor(1);
	      object(300,230);
	    }
	   }

    }
}
void object(int a,int b)
{

  rectangle(a,b,a+46,b+47);
  rectangle(a-20,b+4,a-10,b+40);
  rectangle(a+56,b+4,a+66,b+40);
  rectangle(a+10,b+47,a+20,b+90);
  rectangle(a+30,b+47,a+40,b+90);
  circle(a+23,b-20,15);
  circle(a+23-6,b-20-4,3);
  circle(a+23+6,b-20-4,3);
}
void object1(int a,int b)
{

  rectangle(a,b,a+46,b+50);
//  rectangle(a-20,b+4,a-10,b+40);
  line(a-20,b+4,a-10,b+10);
  line(a-20,b+4,a-45,b+40);
  line(a-10,b+10,a-36,b+47);
  line(a-45,b+40,a-36,b+47);

  line(a+56,b+10,a+66,b+4);
  line(a+56,b+10,a+72,b+45);
  line(a+66,b+4,a+82,b+40);
  line(a+72,b+45,a+82,b+40);

//  rectangle(a+10,b+60,a+20,b+90);
  line(a+10,b+60,a+20,b+66);
  line(a+10,b+60,a-15,b+100);
  line(a+20,b+66,a-6,b+90+18);
  line(a-15,b+100,a-6,b+90+18);
 // rectangle(a+30,b+60,a+40,b+90);
 line(a+30,b+60,a+40,b+56);
 line(a+40,b+56,a+60,b+56+36);
 line(a+30,b+60,a+50,b+60+35);
 line(a+60,b+56+36,a+50,b+60+35);
  circle(a+23,b-16,12);
  circle(a+23-6,b-20+2,3);
  circle(a+23+6,b-20+2,3);

}
void background()
{
   int i;
  //for star
    for(i=0;i<=639;i++)
    {
       putpixel(i,rand()%439,rand()%16);
    }
    //for opera logo
    for(i=100;i<115;i++)
    {
	setcolor(15);
	circle(i,90,30);
    }
    // bars
      bar(300,323,getmaxx(),330);
      bar(150,315,200,323);
      bar(30,323,80,330);
}