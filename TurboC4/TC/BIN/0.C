#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  clrscr();
  for(a=20;a>11;a--)
     {   printf("\n");
	  for(b=a;b>2;b=b/2+1)
	  {
	  printf("%d",b);
	  }

     }
     getch();
   }