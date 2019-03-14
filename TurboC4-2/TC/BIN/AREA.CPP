#include<iostream.h>
#include<conio.h>
#include<math.h>

class book
{
	private :
	int a ,c,b;
	public:
	void show ()
	{
		cout<<"enter the hight of triangle=";
		cin>>a;
		cout<<"enter the base of triangle=";
		  cin>>b;
		  c=a*b/2;
		cout<<"\nthe area of triangle="<<c<<"\n";

	}

};
void main()
{
	book   b1;
	clrscr();
	b1.show();
	getch();
}