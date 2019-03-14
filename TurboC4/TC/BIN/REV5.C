#include<stdio.h>
#include<conio.h>
int rev(int);
main()
{
    int a,b,c;
    clrscr();
    printf("enter the number =");
    scanf("%d",&a);

    c=rev(a);
    printf("reverse=%d ",c);
    getch();
}
int rev(int a)
{
  int f,d;
  if(a%10!=0)
  {

     f=rev(a/10);
     return f;
     d=a%10*10+f;
     return d;
     }}