#include<stdio.h>
#include<conio.h>
int no(int,int);
main()
{
 int a,r,b;
 clrscr();
 printf("enter the number");
 scanf("%d",&a);

 printf("even nois");
 no(2,a);
 printf("\n\%dnodd number",no(a,b));
 no(1,a);
 printf("sum%d",no(a,b));
 getch();
}
int no(int a,int b)
{ int f;
  if(a<=b)
  {
    printf(" %d,",a);
   f=a+no(a+2,b);
     return f;
    }

 }

