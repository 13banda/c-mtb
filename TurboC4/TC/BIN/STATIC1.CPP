#include<iostream.h>
#include<conio.h>
class xyz
{
   public:
   static int i;


 xyz()
 {
 }
};

int xyz::i=1;

main()
{

  xyz obj;
  cout<<obj.i;
  getch();
}