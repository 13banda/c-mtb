#include<iostream.h>
#include<conio.h>

class animal
{

    public:
    int foot;
   animal()
   {
    foot=4;
   }
};

class dog : public animal
{


    public:
    int tail;
   dog()
   {
    tail=1;2
   }
};


main()
{  clrscr();
  dog d;
  cout<<d.foot;
  cout<<" "<<d.tail;


  getch();
}


