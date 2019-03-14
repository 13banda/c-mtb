#include<stdio.h>
#include<conio.h>
#include<string.h>
  struct record
  {
	char sname[100];
	char fname[100];
	char  clss[100];
	char r[100];
  };

  int show(int,struct record[]);
  int insert(int,struct record []);


  main()
  {
	  struct record s1[100];
	  int a, b,i,j,k,c,f,g=1;

	  clrscr();
	  printf("HOW many records YOU want to ENTER...");
	  scanf("%d",&a);
	  printf("\n");
		for(i=0;i<a*4;i++)
		{

		     printf("%d.",(i+1)/4+1);

			printf("\n   student name:");
			scanf("%s",s1[i].sname);
			printf("   father name : ");
			i=i+1;
			scanf("%s",s1[i].fname);
			i=i+1;
			printf("   class name  : ");
			scanf("%s",s1[i].clss);
			i=i+1;
			printf("   roll number : ");
			scanf("%s",s1[i].r);
			printf("\n");

		}


	  printf("1.for show records.");
	  printf("\n2.for insert more records");
	  printf("\n3.for exits...");

	  scanf("%d",&j);
	  printf("\n");

		switch(j)
		{
			case 1:
			{
				show(a,s1);

				return 0;
			}
			case 2:
			{
				insert(a,s1);

				return 0;
			}
			case 3:
			{
			return 0;
			}
	       }

       getch();
 }



 int show(int a,struct record  s1[])
 {
	int k,c,d,f,g=1;
	 clrscr();
	printf("\n=>STUDENTS RECORD is..\n");
	   for(k=0;k<a*4;k++)
	   {

		 printf("%d.",(k+1)/4+1);

		   printf("\n student name:%s",s1[k].sname);
		   k=k+1;
		   printf("\n father name:%s",s1[k].fname);
		   k=k+1;
		   printf("\n class name:%s",s1[k].clss);
		   k=k+1;
		   printf("\n roll no.:%s",s1[k].r);
		   printf("\n");

	   }

	printf("\n1. for insert records.");
	printf("\n2. for exits...");

	scanf("%d",&c);

       switch(c)
	{
	  case 1:
	  {
	       d=insert(a,s1);

	       break;
	   }
	  case 2:
	  {
		   return 0;
	  }
	}
}

 int insert (int a,struct record  s1[])
 {
	 int b,i,c,f,g=a+1;
	       clrscr();
		printf("=>HOW many records YOu want to ENTER... ");
		scanf( "%d",&b);
		printf("\n");
	 for(i=a*4;i<(a+b)*4;i++)
	 {

	       printf("%d.",i/4+1);

		printf("\n   student name:");
		scanf("%s",s1[i].sname);
		printf("   father name : ");
		i=i+1;
		scanf("%s",s1[i].fname);
		i=i+1;
		printf("   class name  : ");
		scanf("%s",s1[i].clss);
		i=i+1;
		printf("   roll number : ");
		scanf("%s",s1[i].r);
		printf("\n");
	}


	 printf("\n1.show records");
	 printf("\n2.exits...");
	 scanf("%d",&c);
	 switch(c)
	 {
		  case 1:
		{
			show(a+b,s1);
			break;
		}
		case 2:
		{
			return 0;
		}
	 }

}

