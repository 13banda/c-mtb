#include<iostream.h>
#include<conio.h>
class base
{

   public:
   int x;
   base(int b)
   {    x=b;
   cout<<"\nbase class perimertrised constructor";
   }
};
class drived:public base
{

    public:
    int y;
    drived(int d):base(d)
    {    y=d;
     cout<<"\ndrived class perimetrised constructor";
     }
 };


 void main()
 {    clrscr();

   drived c(10);
   //  cout<<c.y;

     cout<<c.x;
     getch();
  }

