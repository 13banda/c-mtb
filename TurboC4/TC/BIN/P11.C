#include<stdio.h>     //project given by Hement sir
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define char value=127;
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
	  int i,j;
	  #define char value=127;
	  setlinestyle(SOLID_LINE,1,3);
	  setcolor(4);
	  object(300,230);

	  for(i=0;i<639;i++)
	  {  if(kbhit())
	      {
		 if( getche()==127)
		 {
		  setcolor(0);
		  object(145,220);

		  setcolor(4);
		  object1(200,100);

		  }
		}
	   if(i==getmaxx())
	  {
	       setcolor(0);
	  object1(200,100);
		setcolor(4);
		object1(250,180);

	     setcolor(0);
	     object1(250,180);
	      setcolor(4);
	      object(300,230);

	    i=10;
	   }
	   setcolor(YELLOW);
	   moveto(i+10,260);
	   lineto(i,260);
	   delay(7);
	   setcolor(BLACK);
	   lineto(i+1,260);
	   if(i==260)
	   {  setcolor(4);
	    object1(200,100);

	    setcolor(0);
	    object(300,230);
	    }
	    if(i==300)
	    {   setcolor(0);
		object1(200,100);
		setcolor(4);
		object1(150,180);
	    }
	     if(i==367)
	    {
	     setcolor(0);
	     object1(150,180);
	     setcolor(4);
	     object(145,220);

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