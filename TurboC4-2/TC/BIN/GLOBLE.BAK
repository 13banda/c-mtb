#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
main()
{
  int a=DETECT,b,i;
  clrscr();
  initgraph(&a,&b,"");
  for(i=1;i<100;i+=2)
  {
     ellipse(300,230,0,360,i+100,i);
     ellipse(300,230,360,0,i,i+100 );
  }
  for(i=0;i<getmaxx();i++)
  {

    setcolor(4);
     if(i%30==0)
     arc(300,230,i,i+1,80);
   // line(i,i,i,i);
      delay(10);
  }
  getch();
  closegraph();
 }