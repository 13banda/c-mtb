#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

main()
{
   int a=DETECT,b,i,j,k;
   clrscr();
   initgraph(&a,&b,"");
   getch();
   for(i=0;i<700;i++)
   {
       for(j=0;j<=500;j+=10)
       { if(j%50==0)
       {
	  setcolor(j/50+1);
	  }
	line(i,j,i,j+20);
	}

   delay(5);
   }
    setcolor(1);
     delay(500);
     for(i=0;i<500;i++)
     {
	for(j=0;j<700;j+=5)
	{
	  if(j%50==0)
	  {
	  setcolor(j/50-4);
	  }
	line(j,i,j+22,i);
	}
	delay(5);
   }
   clrscr();
   setbkcolor(1);

  textbackground(0);
  clrscr();
   outtextxy(getmaxx()/2,getmaxy()/2,"Thanks for watching...");
   delay(5000);

   closegraph();
}