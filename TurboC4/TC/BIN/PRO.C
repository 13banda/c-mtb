#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char s1[100],s2[100],i;
    int s3[100],j,b,c=0,n,d;
    clrscr();
    printf("enter the string ");
    gets(s1);
    n=strlen(s1);
    for(b=0;b<26;b++)
    {
	for(i='a';i>='a'&&i<='z')
	{
	     for(j=0;j<n;j++)
	     {
		 if(i=s1[j])
		 {
		    c+=1;
		  }
	     }
	     c=d;
	  s3[b]=d;
	  s2[b]=i;
	     c=0;
	 }
    }

    d=s3[0];
    for(j=0;j<26;j++)
    {
	if(s3[j]>d)
	{
	   d=s3[j];
	}
    }
   for(j=0;j<26;j++)
   {
       if(s3[j]==d)
       {
       printf("\n%c",s2[j]);
       }
   }
   getch();
   }