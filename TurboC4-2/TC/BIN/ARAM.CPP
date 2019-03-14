#include<stdio.h>
#include<conio.h>
main()
{
int i,n,r,sum=0;
clrscr();
printf("enter no");
scanf("%d",&n);
i=n;
while (i>0)
{
r=i%10;
}

sum=sum +10*(r*r*r);
i=1/10;
}
if(sum==n)
{
printf("aramstrong no");
}
else
{
printf("no aramstrong no");
}
getch();
}
