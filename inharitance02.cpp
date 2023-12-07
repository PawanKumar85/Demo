#include <iostream>
using namespace std;
class A{
	public : 
		void Alogic()
			{
				cout << "A class Logic\n";
			}
};

class B{
	A obj;	// instance object  // Aggregation
	public :
		void Blogic()
		{
			
			obj.Alogic();
			cout << "B class Logic";
		}
};
int main()
{
	B obj;
	obj.Blogic();
	return 0;
}

