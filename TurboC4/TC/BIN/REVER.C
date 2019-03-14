#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,n,d=0;
  clrscr();
  printf("enter the number=");
 scanf("%d",&a);
 for(b=a;b>0;b=b/10)
 {
   c=b%10;
   d=d*10+c;



 }


      printf("%d",d   );
      getch();




}