#include <iostream>
using namespace std;

class A{
	int a,b;
	public :
		A(int m,int n)
		{
			a = m;
			b = n;
		}
		
		void AgetData()
		{
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
		}
};

class B : public A 
{
	int x,y,z;
	public :
		B(int t1,int t2,int t3) :A((t1+t2),t3)
		{
			x = t1;
			y = t2;
			z = t3;	
		}	
		
		void BgetData()
		{
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
			cout << "z = " << z << endl;
		}
};

int main()
{
	B obj(10,20,30);
	obj.BgetData();
	obj.AgetData();
	return 0;
}


//Constructer Chaining
