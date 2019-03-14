#include<stdio.h>
#include<conio.h>
#include<math.h>
int rev(int ,int);
main()
{
   int a,b,c=0;
   clrscr();
   printf("enter the elements in arrey=");
   scanf("%d",&a);
   for(b=a;b>0;b=b/10)
   {
   c++;
   }

   c=rev(a,c);
   printf("rverse is =%2d!",c);

   getch();
 }

int rev(int a,int c)
{
   int f;
   if(a<10)
   {
   f=a%10*pow(10,c-1)+rev(a/10);
   return f;
   }

}

