#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<bios.h>
#include<dos.h>
#include<string.h>
int down(int,int,int,int,char *,char *);
int up(int, int,int,int,char *,char *);
main()
{
   int a=DETECT ,b,i,setbk=7;
    char * s1[100]={"Menu","Option","Quit","About","Exit" };
   clrscr();
   initgraph(&a,&b,"");
   setbkcolor(0);
   setcolor(7);
   rectangle(198,98,302,222);
//   setfillstyle(1,7);
  // floodfill(200,100,7);
   setlinestyle(0,1,3);
   for( i=0;i<120;i+=26)
   {
      setcolor(4);
      outtextxy(228,105+i,("%s",s1[i/26]));
   }
    setcolor(8);
   line(200,224,303,224);
   line(304,99,304,222);
   setlinestyle(0,0,1);
   setcolor(2);
   rectangle(200,100,300,120);
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
   getch();
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
	  rectangle(200,y1,300,y2);
	  setfillstyle(1,0);
	  floodfill(201,y1+1,0);
	   setcolor(4);
	  outtextxy(228,105+i,("%s",s1));
	  setcolor(2);
	  rectangle(200,y1+25,300,y2+25);
	   setfillstyle(1,2);
	  floodfill(201,y1+25+1,2);
	   setcolor(0);
	 outtextxy(228,105+i+25,("%s",s2));
	  return i;
	  }
	  else
	  {
	    return i-25;
	  }
}
int up(int y1,int y2,int i,int setbk,char *s1,char *s2)
{  if(i>=25)
 {
   setcolor(1);
   rectangle(200,y1,300,y2);
   setfillstyle(1,1);
   floodfill(201,y1+1,1);
    setcolor(0);
   rectangle(200,y1,300,y2);
   setfillstyle(1,0);
   floodfill(201,y1+1,0);
   setcolor(4);
   outtextxy(228,105+i,("%s",s1));
   setcolor(2);
   rectangle(200,y1-25,300,y2-25);
    setfillstyle(1,2);
    floodfill(201,y1-24,2);
    setcolor(0);
    outtextxy(228,105+i-25,("%s",s2));
   return i-50;
  }
  else
  {
     return i-25;
  }
}


