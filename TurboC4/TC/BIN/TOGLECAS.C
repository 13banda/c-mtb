
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
main()
{
    char s1[100],s3[100],s2;
    int i,j;

    clrscr();
    printf("Enter the any string= ");
    gets(s1);
    for(i=0;i<strlen(s1);i++)
    {
	if(i%2!=0)
	{
		s2=s1[i];
		s3[i]=tolower(s2);
	}
	 else
	{
		   s2=s1[i];
		    s3[i]=toupper(s2);
	}
    }
	   s3[strlen(s1)]='\0';
     printf("\nToggle case of char.= ");
     puts(s3);

     getch();
     }
