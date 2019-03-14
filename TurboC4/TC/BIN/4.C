#include<stdio.h>
#include<conio.h>
main()
{
  long int a[1000],b,c=0,i=0,j,n;
  clrscr();
  printf("enter the number:");
  scanf("%ld",&n);
  for(b=n;b>=1;b=b/2)
  {
     a[c]=b%2;
     c+=1;
  }
   for(b=c-1;b>=0;b--)
   {
     printf("%ld",a[b]);
   }
   getch();
  }














