#include<stdio.h>
#include<conio.h>
int fact (int);
main()
{
    int  n,r,a,b,p;
    clrscr();

     printf("enter the number n= ");
     scanf("%d",&n);

     for(a=0;a<n;a++)
     {
	printf("\n");
	for(b=n;b>a;b--)
	{
	   printf("   ");
	}

	    for(r=0;r<=a;r++)
	    {
	      p=fact(a)/(fact(r)*fact(a-r)) ;
		printf("%d     ",p);
	     }

     }
	  getch();
     }


     int fact(int x)
     {
	int i,j,k,c=1;
	for(i=x;i>=0;i--)
	{
	   if(i==0)
	   {
	     i=1;
	     c*=i;
	     break;
	     }
	     else
	     {
	     c*=i;
	     }
	  }
	  return c;
       }