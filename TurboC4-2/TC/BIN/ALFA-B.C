
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    clrscr();
    for(a=1;a<=13;a++)
    {
	printf("\n");
	for(b=1;b<13;b++)
	{
	  if(a==1||a==13)
	  {
	      if(b<=7)
	      printf("* ");
	   }
	  else if(a==2||a==12)
	   {   if(b<=8)
	      printf("* ");
	   }

	  else if(b==1||b==10)
	   {
	     printf(" * *");
	   }
	   else if(a==6||a==7)

	   { if(b<5)
	   printf(" *");
	   }
	   else
	   {printf(" ");
	   }
	 }
     }
     getch();
     }