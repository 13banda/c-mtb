#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
   int i,a=DETECT,b;
   initgraph(&a,&b,"");
   for(i=0;i<600;i+=30)
   {
      lineto(i,150);
      delay(100);

      lineto(i+5,50);
      delay(150);
      if(i==640)
      {
	i=0;
     setcolor(rand()%15);
     }
   }

    getch();
    closegraph();
    }