#include <iostream>
using namespace std;

 
class Base
{
protected:
	int _val;

public:
	Base(int in_val)
		:_val(in_val)
	{
		
	}
};

class Derived : public Base
{

public:
	Derived(int val)
		:Base(val)
	{


	}

	void setValue(int value)
	{
		Base::_val = value;
		//do something with variable defined in Derived
	}
};


int main()
{



	return 0;
}

