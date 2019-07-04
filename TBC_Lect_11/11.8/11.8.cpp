#include <iostream>
using namespace std;


class Base
{
protected:
	int _i;

public:
	Base(int value)
		:_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived :public Base
{
private:
	double _d;

public:
	Derived(int value)
		:Base(value)
	{}

	using Base::_i; //부모 클래스의 protected변수를 public처럼 사용가능하도록 해줌

private:
	using Base::print; //함수의 이름만 쓰고 ()는 쓰지 않는다.

	void print() = delete; //delete를 통해 상속 받은 클래스에서 함수에 접근할 수 없게됨**
};

int main()
{

	Base base(4);
	base.print();

	Derived derived(1);
	derived._i=1010;
	derived.print(); //상속 받은 클래스에서 함수에 접근할 수 없게됨**
	
	//derived.print(); //Derived클래스에서 private로 변경했기 때문에 사용 불가능

	return 0;
}

