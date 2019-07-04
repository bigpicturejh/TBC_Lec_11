#include <iostream>
using namespace std;

class Mother
{
private: 
	int _i;


public:
	Mother(const int& i_in = 0)
		:_i(i_in)
	{
		cout << "Mohter construction" << endl;
	}
};

class Child : public Mother 
{
public:
	double _d;

public:
	Child() 
		: _d(1.0), Mother(2020)
	{
		
		cout << "Child construction" << endl;
	
	}

};

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		:A(a)
	{
		cout << "B: " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C: " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}
};
int main()
{

	//Child c1;
	//cout << sizeof(Mother) << endl;
	//cout << sizeof(Child) << endl;

	C c(1024, 3.14, 'a');

	return 0;
}

