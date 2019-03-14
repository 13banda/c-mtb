#include<stdio.h>
#include<conio.h>
main()
{
	long int a,b,c,n,d=0;
	clrscr();
	printf("enter the number=");
	scanf("%ld",&a);

	 for(b=a;b>0;b=b/10)
	 {
		c=b%10;

		d=d*10+c;

	 }

	 for(b=d;b>0;b=b/10)
	  {
		c=b%10;

			 switch(c)
			 {
				 case 1:
				  printf("one ");
				   break;
				 case 2:
				  printf("two ");
				   break;
				 case 3:
				  printf("three ");
				 break;
				case 4:
				printf("four ");
				break;
				case 5:
				printf("five ");
				 break;
				case 6:
				 printf("six ");
				break;
				case 7:
				 printf("seven ");
				break;
				case 8:
				printf("eight ");
				break;
				case 9:
				printf("nine ");
				break;
				case 0:
				printf("zero ");
				break;
			    }
	       }

      getch();

}