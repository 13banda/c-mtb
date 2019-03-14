  #include<stdio.h>
  #include<conio.h>
  int pow(int ,int);
  main()
  {
      int a,b,p;
      clrscr();
      printf("enter the number=");
      scanf("%d",&a);
      printf("enter the power=");
      scanf("%d",&b);

      p=pow(a,b);

      printf("b is power of a then result is =%d",p);

      getch();
  }

  int pow(int a,int Y)
  {
     int f,d,g;
     if (Y==0)
     {
       return f;
      }
     else if(Y==a)
     { d=1;
      d*=a;
      }
      else
     {
       d*=a;

       f=pow(a,Y-1);
      }
      f=d;
      return f;

   }



