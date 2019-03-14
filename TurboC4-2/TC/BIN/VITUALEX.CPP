#include<iostream.h>
#include<conio.h>

class  Base
{
   public:
  virtual  void show()
    {
      cout<<"base class";
    }
 };
 class child:public Base
 {
    public:
    void show()
    {
    cout<<"child class";
    }
 };

void main()
{
    clrscr();
  Base *b;
  child c;
	       // if we use late binding the cnt use earily binding in our method

  b=&c;
  b->show();
  getch();
 }

