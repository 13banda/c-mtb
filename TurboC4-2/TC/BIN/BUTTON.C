#include<header.h>
main()
{
 int a=DETECT,b;
 clrscr();
 initgraph(&a,&b,"");
 for(a=0;a<16;a++)
 {  delay(2000);
 setbkcolor(a);

// line(220,10,300,220);
 setcolor(7);
 rectangle(200,200,300,215);
 setcolor(8);
 line(200,200,300,200);
 line(200,200,200,215);


  setcolor(7);
 rectangle(200,100,300,115);
 setcolor(8);
 line(300,100,300,115);
 line(200,115,300,115);
 }
 getch();
 closegraph();
 }