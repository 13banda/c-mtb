#include<stdio.h>
#include<conio.h>
main()
{

long int a,b,c,d=1,i,n;
 clrscr();
 printf("enter the number a=");
 scanf("%ld",&a);
 printf("enter the number b=");
 scanf("%ld",&b);
 for(i=1;i<a||i<b;i++)
 {
 if (a%i==0||b%i==0&&i!==a&&i!==b)
 {
   d*=i;
  printf("%ld,",i);
  }
  } printf("\nhcf=%ld",d);
  getch();
  }