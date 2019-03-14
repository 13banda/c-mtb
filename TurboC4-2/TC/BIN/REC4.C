#include<stdio.h>
#include<conio.h>
int no(int);
main()
{
  int a,fact,b;
  clrscr();
  printf("enter the range");
  scanf("%d",&a);

 fact=no(a);
  printf("%d",fact);
  getch();
}

int no(int a)
{
int f;
	if(a==1)
	{
	return 1;
	}
	else
	{
	 f=a*no(a-1);

	 return f;
	 }
}



