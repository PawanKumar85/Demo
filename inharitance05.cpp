#include <iostream>
using namespace std;

void Afn()
{
	cout << "this is Global function";
}

class A
{
	public :
		void Afn()
		{
			cout << "A Class function\n";
			::Afn();		// this is SRO function otherwise it is infinte loop
			//Afn();  this make a infinte loop
		}	
};
int main()
{	
	A obj;
	obj.Afn();
	return 0;
}
