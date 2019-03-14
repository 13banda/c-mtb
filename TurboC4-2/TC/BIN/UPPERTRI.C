#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
 int a[100][100],x[100][100],i,j=0,k,n,d,b,sum=0,c;
  clrscr();
  printf("enter the rows and colum of m =");
  scanf("%d%d",&d,&b);
  for(i=0;i<d;i++)
  {
	printf("\n");
	for(j=0;j<b;j++)
	{
	  printf("a(%d,%d)=",i,j);
	  scanf("%d",&a[i][j]);
	  }

}
     for(i=0;i<d;i++)
     {
	for(j=0;j<b;j++)
	{
	   if(i+j<i+i)
	   {
	     if (a[i][j]!=0)
	     {
	     sum++;
	     }
	   }
     } }
      if (sum!=0)
      {    printf("\nupper not");
      }
      else
      {
      printf("\n upper");

	}



	   getch();
	   }