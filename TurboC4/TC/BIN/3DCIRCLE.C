#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
main()
{
  int a=DETECT,b,x,y,i,r=10;
  clrscr();
  initgraph(&a,&b,"");
  //closegraph();
 for(r=30;r<80;r++)
 {

  for(i=0;i<=700;i++)
  {
    x=1;
    y=r*cos((i*3.14)/180);
    putpixel(i,y+230,7);
  }
 }
  getch();
  closegraph();
}
