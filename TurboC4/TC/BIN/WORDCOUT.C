#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int a,b,l,c=0;
    char s1[100];
    clrscr();
    printf("enter the string : ");
    gets(s1);
    l=strlen(s1);
    for(a=0;a<l;a++)
    {    if(s1[a]>='a'&&s1[a]<='z')
       {
	 for(b=a;b<l;b++)
	 {
	     if(s1[b+1]==" ")
	    {  a=b;
	    break;
	     }
	  }
	  c+=1;
       }
   }
   printf("no of wpord in string is %d  ",c);
   getch();
   }
