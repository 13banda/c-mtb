

			  //swaping of first and last digits
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

main()
{  int r=DETECT,f;
 long int a,b,c,i,j,k=0,n,p,q;
  clrscr();
  initgraph(&r,&f,"");
  setbkcolor(BLACK);
  setcolor(RED);
  printf("enter the number=");
  scanf("%ld",&a);
  c=a%10;

  for(b=a;b>0;b=b/10)
  {
     i=b%10;
     k+=1;
   }
   p=pow(10,k-1);
   n=a%p;

   j=c*p+n;

   q=j/10*10+i;


   printf("\n swaping of first and last digits of above number=%ld",q);
   getch();
   }
