#include <iostream>
using namespace std;

class A{
	private :
		int a;
	protected :
		int b;
	public :
		int c;
		void getpri()
		{
			a = 70;
			cout << "a = " << a << endl;
		}
};

class B : public A
{
	private :
		int x;
	protected :
		int y;
	public :
		int z;
		void getdata()
		{
			x = 10;
			y = 20;
			b = 80;
			
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
			cout << "b = " << b << endl;
			getpri();	
		}	
};

int main()
{
	B obj;
	obj.c = 90;
	obj.z = 30;
	
	cout << "c = " << obj.c << endl;
	cout << "z = " << obj.z << endl;
	obj.getdata();
	return 0;
}
