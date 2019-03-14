#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
void main()
{ int a=DETECT,b,i;
   long char s1[1000] ;
 clrscr();
 // initgraph(&a,&b,"");
// window(10,10,80,25);
// textcolor(7);
 //clrscr();

  window(0,1,80,2);
  textbackground(1);
  clrscr();
  textcolor(7);
  gotoxy(1,1);
  cprintf("BGI corporation");


  window(78,1,79,1);
  textbackground(2);
  clrscr();
  textcolor(4);
  gotoxy(1,1);
  cprintf("*");



  window(1,2,80,4);
  textbackground(0);
  clrscr();
  textcolor(4);

  window(1,3,10,3);
  textbackground(7);
  clrscr();
  textcolor(6);
  cprintf("toutorial");


  window(1,5,15,23);
  textbackground(7);
  clrscr();
  textcolor(4);
  cprintf("c programming");
  gotoxy(1,2);
  cprintf("enjoy with us!");

  window(1,23,80,25);
  textbackground(0);
  clrscr();
  textcolor(4);
  gotoxy(20,16);
  cprintf("follow us on ");

  window(16,5,80,22);
  textbackground(3);
  clrscr();
  textcolor(0);
  for(i=1;i<=15;i++)
  {  gotoxy(1,i);
     cgets(s1);
  }
  textcolor(1);
    cputs(s1);


  getch();
  closegraph();
  }