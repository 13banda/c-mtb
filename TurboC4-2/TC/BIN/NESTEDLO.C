
#include<stdio.h>
#include<conio.h>
main()
{
   int i,n,j;
   clrscr();
   printf("enter the stair ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
	    for(j=1;j<=i*5;j++)
	 {
		 printf(" ");

	  }
	    for(j=1;j<=5;j++)
	  {
	       printf("*");
	  }
	       printf("\n");

	    for(j=1;j<=i*5;j++)
	  {
		printf(" ");

	 }
	   for(j=1;j<=5;j++)
	{
		printf("*");
	}
		printf("\n");
   }

     getch();
}