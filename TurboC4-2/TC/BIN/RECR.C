#include<stdio.h>
#include<conio.h>
#include<math.h>
int rev(int ,int);

main()
{
   int a,b,c=0,d;
   clrscr();
   printf("enter the number=");
   scanf("%d",&a);
   for(b=a;b>0;b=b/10)
   {
   c+=1;
   }

   d=rev(a,c-1);
   printf("rverse is =%4d!",d);
   if(a==d)
   {
   printf("\nno is palindrone");
    }
    else
    {
    printf("\n no is not palindrone");
    }
   getch();
 }

int rev(int a,int c)
{
   int f;
    if(a<10)
    {
      return a;
      }

   else
   {
   f=(a%10*pow(10,c))+rev(a/10,c-1);
   return f;
   }

}