#include<stdio.h>
#include<conio.h>
void rev(int);
main()
{
 int a,r;
 clrscr();
 printf("enter the number");
 scanf("%d",&a);

 rev(a);
 //printf("%d",r);
 getch();
}
void rev(int a)
{
  int f,b;
  if(a==1)
  {
  printf("\t%d",a);
  }
  else
  {
    rev(a-1);
    if(a%2!=0)
    {
     printf("\t%d,",a);
     }
}

 }

