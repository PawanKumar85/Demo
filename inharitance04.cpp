#include <stdio.h>
class A
{
	public :
		void pub_function()
		{
			printf("This is Public Member");
			pri_function();  //indirect accessing the private member
		}
	protected :
		void pro_function()
		{
			printf("\nThis is Protected Member");
		}
	private :
		void pri_function()
		{
			printf("\nThis is Private Member");
		}
};

class B : public A
{
	public :
		void get_parent()
		{
			pub_function();	
			pro_function();
			// pri_function();		// Error -due to not accessible => locked in child class
		}	
};
int main()
{
	B obj;
	obj.get_parent();
	return 0;
}
