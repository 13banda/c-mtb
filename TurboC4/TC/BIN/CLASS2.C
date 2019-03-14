#include<iostream.h>
#include<conio.h>
class Book
{
      private:
      int x,y,z;
      public:

     Book ()
     {    x=1;
     y=2;
     z=3;
	cout<<"\ndefault constructor";
     }
     Book(int a)
    {
       x=a;
       y=2;
       cout<<"\ninside one perimeter="<<x;
    }
     Book(int a,int b)
    {
       x=a;
       y=b;
       cout<<"\ninside two perimeter="<<x<<"\t"<<y;
    }
    void show ()
    {
       z=x+y;
       cout<<"\n"<<z;
     }

};
main()
{
      clrscr();
      Book b1;
      Book b2(10);
      Book b3(12,13);
      b1.show();
      b2.show();
      b3.show();
      getch();
}