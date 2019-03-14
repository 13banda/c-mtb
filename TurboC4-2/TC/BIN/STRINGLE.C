#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
       clrscr();
	 int a=DETECT,b;
     initgraph(&a,&b,"");

       char c[]="dklfjgdflkjg";
       outtext(c);
       printf("\n%d ,%d ,%d",getx(),getmaxx(),getmaxy());
       getch();
}
