#include <iostream>
using namespace std;

class A		// parent class // super class 
{
	public:
		void Alogic()
		{
			cout << "this is A class\n";
		}
};

class B : public A // child class // sub class 
{
	public :
		void Blogic()
		{
			cout << "this is B class";
		}
};
int main()
{
	B obj;
	obj.Alogic();
	obj.Blogic();
	return 0;
}
