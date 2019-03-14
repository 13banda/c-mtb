#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include<graphics.h>
main()
{
   int a=DETECT,b,i,j;
   clrscr();
   initgraph(&a,&b,"");

   outtextxy(getmaxx()/2-55,getmaxy()/2+150,"press any key to exit");
   for(i=1;!kbhit();i++)
   {
    setcolor(rand()%15);
    for(j=1;j<=25;j+=1)
    {       delay(10);

      circle(getmaxx()/2,getmaxy()/2,j);
    }

    setcolor(rand()%15);
    for(j=30;j<=45;j++)
    {    delay(9);
       circle(getmaxx()/2,getmaxy()/2,j);
     }

     setcolor(rand()%15);
     for(j=53;j<=73;j++)
     {
	 circle(getmaxx()/2,getmaxy()/2,j);
	 delay(8);
      }

      setcolor(rand()%15);
     for(j=82;j<=89;j++)
     {
	 circle(getmaxx()/2,getmaxy()/2,j);
	 delay(7);
      }
      delay(210);
     }

  closegraph();
  }
