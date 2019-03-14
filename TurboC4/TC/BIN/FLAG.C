#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
main()
{ int a=DETECT,b,i,j,n;
   clrscr();
   initgraph(&a,&b,"");
    for(i=30;i<60;i++)
    {     // textcolor(12);
    arc(getmaxx()/2-200,getmaxy()/2+i-150,45,140,43);
    arc(378-200,180+i-150,180+45,180+147,40);
    }
      for(i=1;i<30;i++)
    {      setcolor(28);
    arc(getmaxx()/2-200,getmaxy()/2+i-150,45,140,43);
    arc(378-200,180+i-150,180+45,180+147,40);
    }
      for(i=60;i<90;i++)
    {        setcolor(34);
    arc(getmaxx()/2-200,getmaxy()/2+i-150,45,140,43);
    arc(378-200,180+i-150,180+45,180+147,40);
    }
    setcolor(1);
    circle(349-200,253-150,10);
 for(i=-100;i<100;i++)
 {
   for(j=-100;j<100;j++)
   {  if(i*i+j*j==100)
    {
      line(349-200,253-150,349-200+i,253-150+j);
    }
 }
 }
  line(84,60,84,300);
  //line(82,60,82,300);
  gotoxy(1,20);



     setlinestyle(SOLID_LINE,1,3);
     setcolor(YELLOW);
     moveto(84,60);
     lineto(84,320);      //LASER
     setcolor(YELLOW);
     setcolor(8);
   //setfillstyle(100,2);

     bar(2,320,170,350);
     bar(2,350,210,380);
     bar(2,380,250,410);
     ///floodfill(200,200,RED);
   getch();
   closegraph();
}