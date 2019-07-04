#include <iostream>
using namespace std;

class Base
{
public:
	int _public;
protected:
	int _protected;
private:
	int _private;
};

class Derived :private Base //Derived를 상속받은 클래스는 Derived가 상속받은 변수를 private처럼 사용하게 됨을 의미함
{
public:
	Derived()
	{
		Base::_public;
		Base::_protected;
		
	
	}
};

class GrandChild : public Derived //Derived에서 상속받았기 때문에 전부 private로 동작함
{
public:
	GrandChild()
	{
		Derived::_public;
		Derived::_protected;
	}
};

int main()
{

	Base base;
	
	Derived derived;
	//derived._public = 12313123;


	return 0;
}

