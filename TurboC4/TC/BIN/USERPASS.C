#include<stdio.h>
#include<conio.h>
#include<string.h>
 int uname(char*,int);
char* time(int);
int pass(char*,int,char *);
main()
{
  char* username="admin";
  char* password="admin";
  int a=3,b;
  clrscr();
  b=uname(username,a);
  switch (b)
  {
     case 1:
     { a=3;
       pass(password,a,username);
     }
     case 2:
     {
       printf("\n\n\tyou have sucessfully done user name and password !");
       printf("\n\tpress any key to exit..");

       getch();
       return 0;
      }
  }
  getch();
}
  int uname(char *username,int a)
   {
	 char *u1;
	  int i,b=1;
	  gotoxy(15,10);
	printf("enter the user name in %s times...\n\n",time(a));
	printf("\tUser name :");
	scanf("%s",u1);
	for(i=0;i<strlen(username)&&strlen(username)==strlen(u1);i++)
	{
	    if( u1[i]==username[i])
	    {
	      b=0;
	    }
	    else
	    {
	       b=1;
	    }
       }

	if(b==0)
	{
	  return 1;
	}
	else if(a==1&&b==1)
	{
	   printf("\n\n\tyour time is out");
	   printf("\n\tpress any key to exit");
	   getch();
	   exit(0);
	 }
	else
	{
	   printf("\n\n\tyou have enter wrong username\n");
	   printf("\tpress any key to try next..");
	   getch();
	   clrscr();
	  b=uname(username,a-1);
	 }
}

char* time(int a)
{
    switch(a)
    {
     case 1:

       return "One";

     case 2:

      return "two";
     case 3:

      return "Three";

  }
}

int pass(char* password,int a,char *username )
{
      char* p1;
      int b=1,i;
      clrscr();
      gotoxy(15,10);
      printf("enter the password in %s times...\n\n",time(a));
      printf("\tusername: %s\n",username);
      printf("\tpassword: ");
   //   gets(p1);
     scanf("%s",p1);
      for(i=0;i<strlen(password)&&strlen(p1)==strlen(password);i++)
      {
	  if(p1[i]==password[i])
	  {
	     b=0;
	  }
	  else
	  {
	    b=1;
	  }
       }
	if(b==0)
	{
	  return 2;
	}
	else if(a==1&&b==1)
	{
	   printf("\n\n\tyour time is out");
	   printf("\n\tpress any key to exit");
	   getch();
	   exit(0);
	 }
	else
	{
	   printf("\n\n\tyou have enter wrong password\n");
	   printf("\tpress any key to try next..");
	   getch();
	   clrscr();
	  pass(password,a-1,password);
	 }
}