#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,n;
   clrscr();
 //  scanf("%d",&n);
  for(a=1;a<3;a++)
   {
      printf("\n");
      if(a==1)
      {  printf("    ");
	 for(b=10;b>=5;b--)
	{
	 printf("* ");
	}
      }
       if(a==2)
       {
	  printf("  ");
	  for(b=10;b>=4;b--)
	  {
	   printf(" *");
	   }
	} }
   for(a=1;a<=11;a++)
   {
	  printf("\n");

	 for(b=1;b<=12;b++)
	 {
	      if(b==1||b==12)
	      {
		printf(" * *");
	      }
	      else if(a==6||a==7)
	      {  if(b<=6)
		{
		printf(" *");
		}
	      }
	      else
	      {
	       printf(" ");
	      }
	 }
	}
    getch();
    }