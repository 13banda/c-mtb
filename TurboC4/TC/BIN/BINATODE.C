#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  int a,b,c=0,i,d=0,j=0,k=0;
  clrscr();
  printf("enter the binaray number");
  scanf("%d",&a);
  for(i=a;i>0;i=i/10)
  {
    c=i%10;


    d+=c*(pow(2,k));
    k+=1;
  }
  printf("%d",d);
  getch();
  }
