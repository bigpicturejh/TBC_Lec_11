#include <iostream>
using namespace std;

class Mother
{
public: //protected로 두면 자식 클래스에서는 접근 가능함
	int _i;

	

	Mother(const int & i_in=0)
		:_i(i_in)
	{
		cout << "Mohter construction" << endl;
	}
};

class Child : public Mother //부모클래스의 생성자가 먼저 실행되고 자식 클래스의 생성자가 초기화됨
{
public:
	double _d;
public:
	Child() //매개변수가 없는 생성자를 사용자가 정의할 경우 default생성자가 필요하면 사용자가 수동으로 정의해줘야 함!
		: _d(1.0), Mother(2020)//부모 클래스의 변수를 초기화하기 위해 부모 클래스의 생성자를 정의해줘야함!
	{
		//_i = 1020;//부모클래스의 변수가 public이거나 protected인 경우 가능
		cout << "Child construction" << endl;
		/*this->_i = 10;
		this->Mother::_i = 111;*/
	}

};

class A
{
public:
	A()
	{
		cout << "A Construction" << endl;
	}
};
class B : public A
{
public:
	B()
	{
		cout << "B Construction" << endl;
	}
};
class C : public B
{
public:
	C()
	{
		cout << "C Construction" << endl;
	}
};


int main()
{
	//Child c1;

	C c;

	return 0;
}

 