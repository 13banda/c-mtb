#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<alloc.h>
#include<dos.h>
main()
{
 int x=25,y=25,i,j=DETECT,ch,area,xdirn=1,ydirn=1;
 char *buff;
 getch();
 clrscr();
 initgraph(&j,&i,"");
  setcolor(15);
  setfillstyle(1,4);
  circle(50,50,25);
  floodfill(50,50,15);
  area=imagesize(25,25,75,75);

  malloc(area);
  getimage(25,25,75,75,buff);
  rectangle(0,20,getmaxx(),getmaxy());
  outtextxy(250,10,"Onimation");
  while(1)
  {
     if(kbhit())
     {
     ch=getch();
     if(ch==13)
     {
       xdirn*=-1;
       ydirn*=-1;

     }
     else
     {
      if(ch==27)
      break;
     }
    }
    putimage(x,y,buff,XOR_PUT);
    delay(10);
    x=x+(xdirn*5);
    y=y+(ydirn*2);
    putimage(x,y,buff,XOR_PUT);
    delay(10);
    if(x>getmaxx()-50||x<0)
    {
       sound(50);
       delay(5);
       nosound();
       xdirn*=-1;
    }
    if(y>getmaxy()-50||y<20)
    {
      sound(50);
      delay(5);
      nosound();
      ydirn*=-1;
    }

    }
    getch();

    closegraph();
   // restorectrmode();
    }