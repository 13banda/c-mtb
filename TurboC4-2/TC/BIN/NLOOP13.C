#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
  int a,b,i,j;
  clrscr();
  printf("entert he number");
  a=1;
  for(i=1;i<=5;i++)
  {
     printf("\n");
     for(j=i;j<5;j++)
     {
	 printf("%d ",j);

     }
     for(a=1;a<=i;a++)
     {
       printf("%d ",5);
       }
  }
  getch();
}
