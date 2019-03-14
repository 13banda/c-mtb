#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char s1[100];
    int a,i,j,n;
    clrscr();
    textcolor(RED);
    cprintf("enter the string : ");
    gets(s1);
    a=strlen(s1)+2;
    if(a%2!=0)
    { n=(a+1)/2;}
    else
    {n=a/2;}
    textcolor(9);
    window(1,1,40,25);

    for(i=1;i<n;i++)
    {
	printf("\n");
	for(j=n+1;j>i;j--)
	{
	  cprintf("*");
	}
	for(j=1;j<i;j++)
	{
	printf(" ");
	}
	for(j=1;j<i;j++)
	{
	printf(" ");
	}
	for(j=n+1;j>i;j--)
	{
	cprintf("*");
	}
     } if(a%2!=0)
       {

	 printf("\n");
	 cprintf("*");
	 printf("%s ",s1);
	 cprintf("*");
	 }
	else
	{
	printf("\n");
	cprintf("*");
	printf("%s",s1);
	cprintf("*");
	}



    for(i=n-1;i>=1;i--)
    {
	printf("\n");
	for(j=n+1;j>i;j--)
	{
	 cprintf("*");
	}
	for(j=1;j<i;j++)
	{
	printf(" ");
	}
	for(j=1;j<i;j++)
	{
	printf(" ");
	}
	for(j=n+1;j>i;j--)
	{
	cprintf("*");
	}
     }
     getch();
  }