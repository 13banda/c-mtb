	#include<stdio.h>
	#include<conio.h>
	main()
	{   int number1,number2,a,b,c;
	    float d;
	   clrscr();
	   printf("no1=");
	   scanf("%d",&number1);
	   printf("no2= ");
	   scanf("%d",&number2);
	    a=number1+number2;
	    b=number1-number2;
	    c=number1*number2;
	    d=number1/number2;
	    printf("sum of number=%d+%d=%d\nsub. of number=%d-%d=%d\nmulti.ofnumber=%d*%d=%d\ndivid.of number=%d/%d=%f",number1,number2,a,number1,number2,b,number1,number2,c,number1,number2,d);

	   getch();
	   }