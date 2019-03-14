#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
  int a=DETECT,b,c,j;
  clrscr();
  initgraph(&a,&b,"");
  setcolor(2);
  for(c=1;c<=360;c++)
  {     for(j=50;j<=100;j++)
      {	 arc(300,230,0,c,j);
       }

  }


  getch();
  closegraph();
  }
