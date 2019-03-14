#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<bios.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
		    //function declaration
void background();
void object(int,int);
void object1(int ,int);
void process();
int down(int,int,int,int,char *,char *);
int up(int, int,int,int,char *,char *);
int bars();
void option(int );
main()
{
   int a=DETECT,b,k=10;
   clrscr();
   initgraph(&a,&b,"");

   process();
     bars();

   getch();
   closegraph();
}
void process()
{
   int i,p,k=10;
   background();

   setlinestyle(SOLID_LINE,1,3);
   setcolor(4);
   object(300,230);
   p=300;
   for(i=0;i>-1;i++)
   {
      if(i==getmaxx())
      {
	i=0;
      }

	  setcolor(YELLOW); //for built process
	   moveto(i+10,260);
	   lineto(i,260);

	   setcolor(BLACK);
	   lineto(i+1,260);

     if((i>=145&&i<210)&&p==150||(i>=280&&i<360)&&p==300)
    {
	bars();
     }

     if(kbhit())
     {
      switch(_bios_keybrd(_KEYBRD_READ))
      {

	 case 0x4d00 :      //for right key
	 {
	   if(p==300)
	   { break;
	   }

	   setcolor(0);
	   object(300,230);

	   setcolor(0);
	   object(150,230);
	   setcolor(4);
	   object1(180,150); delay(10);
	   setcolor(0);
	   object1(180,150);
	   setcolor(4);
	   object1(220,100);delay(20);
	   setcolor(0);
	   object1(220,100);
	   setcolor(4);
	   object1(270,150); delay(10);
	   setcolor(0);
	   object1(270,150);
	   setcolor(4);
	   object(300,230);
	   p=300;
	   break;
	 }
	 case 0x4b00 :           //for left key
	 {   if(p==150)
	    {
	       break;
	    }
	   setcolor(0);
	   object(300,230);
	   setcolor(4);
	   object1(270,150); delay(10);
	   setcolor(0);
	   object1(270,150);
	   setcolor(4);
	   object1(220,100);delay(20);
	   setcolor(0);
	   object1(220,100);
	   setcolor(4);
	   object1(180,150); delay(10);
	   setcolor(0);
	   object1(180,150);

	   setcolor(4);
	   object(150,230);
	   p=150;
	     break;
	   }
	 case 0x11b:             //for ecape key
	 {
	    bars();
	    break;
	 }
	  case 0x4800:
	  {
	   if(k>=1)

	  { k-=1;}
	   break;
	   }
	  case 0x3920:
	  {
	    getch();
	    break;
	  }
	 }
      }
     delay(k);
   }
}
void background()
{
   int i;
  //for star
    for(i=0;i<=1000;i++)
    {
       putpixel(rand()%getmaxx(),rand()%439,rand()%16);
    }
    //for opera logo
    for(i=100;i<115;i++)
    {
	setcolor(15);
	circle(i,90,30);
    }
    // bars
      bar(300,323,getmaxx(),330);
      bar(150,323,200,330);
      bar(30,323,80,330);
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
int bars()
{
   int a=DETECT ,b,i,setbk=7;
    char * s1[100]={"New process","Continue","Control","About","Exit" };
   cleardevice();
   initgraph(&a,&b,"");
   setbkcolor(0);
   setcolor(7);
   rectangle(195,95,325,225);
//   setfillstyle(1,7);
  // floodfill(200,100,7);
   setlinestyle(0,1,3);
   for( i=0;i<120;i+=26)
   {
      setcolor(4);
      outtextxy(228,105+i,("%s",s1[i/26]));
   }
    setcolor(8);
   line(195,224,325,224);
   line(324,95,324,225);
   setlinestyle(0,0,1);
   setcolor(2);
   rectangle(200,100,320,120);
   setfillstyle(1,2);
   floodfill(201,101,2);
   setcolor(4);
   outtextxy(228,105,("%s",s1[0]))  ;
   for(i=0;i<=125;i+=25)
  { //printf("%d\n",i);
  switch(_bios_keybrd(_KEYBRD_READ))
   {
     case 0x5000:
     {

       i=down(100+i,120+i,i,setbk,s1[i/25],s1[(i/25)+1]);

	 break;
     }
     case 0x4800:
    {

      i=up(100+i,120+i,i,setbk,s1[i/25],s1[(i/25)-1]);

      break;
    }
    case 0x11b:
    {
       exit(0);
       break;
    }
    default :
    {
       i=i-25;
       break;
    }

    }
   }

   closegraph();
}
int down(int y1,int y2,int i,int setbk,char *s1,char *s2)
{
	  if(i<100)
	  {
	  setcolor(1);
	  rectangle(200,y1,300,y2);
	  setfillstyle(1,1);
	  floodfill(201,y1+1,1);

	  setcolor(0);
	  rectangle(200,y1,320,y2);
	  setfillstyle(1,0);
	  floodfill(201,y1+1,0);
	   setcolor(4);
	  outtextxy(228,105+i,("%s",s1));
	  setcolor(2);
	  rectangle(200,y1+25,320,y2+25);
	   setfillstyle(1,2);
	  floodfill(201,y1+25+1,2);
	   setcolor(0);
	 outtextxy(228,105+i+25,("%s",s2));
	  option((i/25)+1);
	  return i;
	  }
	  else
	  {
	    return i-25;
	  }
}
int up(int y1,int y2,int i,int setbk,char *s1,char *s2)
{
if(i>=25)
 {
   setcolor(1);
   rectangle(200,y1,320,y2);
   setfillstyle(1,1);
   floodfill(201,y1+1,1);
    setcolor(0);
   rectangle(200,y1,320,y2);
   setfillstyle(1,0);
   floodfill(201,y1+1,0);
   setcolor(4);
   outtextxy(228,105+i,("%s",s1));
   setcolor(2);
   rectangle(200,y1-25,320,y2-25);
    setfillstyle(1,2);
    floodfill(201,y1-24,2);
    setcolor(0);
    outtextxy(228,105+i-25,("%s",s2));
     option((i/25)-1);
   return i-50;
  }
  else
  {
     return i-25;
  }
}
void option(int s2)
{ if(_bios_keybrd(_KEYBRD_READ)==0x1c0d)
{
   switch(s2)
   {
      case 0:
      {
	main();
	break;
      }
      case 1:
      {
	return 0;
	break;
      }
      case 2:
      {  cleardevice();

	 setcolor(15);
	 printf("controls are not avilable at this time\ntry again later");
	 printf("\n\n press any key to back");
	 getch();
	 bars();
	 break;
      }
      case 3:
      {
	 cleardevice();

	 gotoxy(getmaxx()/2,getmaxy()/2);
	 printf("\tthis project is a practice of c programing.\n\n\t ");
	 printf("press any key to back");
	 getch();
	 bars();
	 break;
      }
      case 4:
      {  exit(0);
	 break;
      }
  }
 }
 else
 {
   }
}