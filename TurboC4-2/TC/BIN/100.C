  #include<stdio.h>
  #include<conio.h>
  main()
  {
   int a ,n;
   clrscr();
   printf("enter the number thqa have counting");
   scanf("%d",&a);
    n=a;

    do {
    printf("%2d\b",n);
    n--;
    } while
    (n>=1&&n<=a) ;
    getch();
    }