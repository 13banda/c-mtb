
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
   int a=DETECT,b,i,j;
   clrscr();
   initgraph(&a,&b,"");
   for(i=1;i<20;i++)
   {
      printf("\n");
      for(j=1;j<20;j++)
      {   if (i==20-j||i==10&&j>=10)
      {
	 printf("* ");
       }
       else
       {
       printf(" ");
       }
      }
	       for(j=1;j<20;j++)
      {
	if(i==j||i==10&&j<2)
      {
	 printf("*");
       }
       else
       {
       printf(" ");
       }
 }
   }
   getch();
   closegraph();
   }