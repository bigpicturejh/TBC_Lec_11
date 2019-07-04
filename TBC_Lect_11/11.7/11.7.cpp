#include <iostream>
using namespace std;


class Base
{
protected:
	int _i;
public:
	Base(int value)
		:_i(value)
	{

	}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream& operator <<(std::ostream& out, const Base& b)
	{
		out << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double _d;

public:
	Derived(int value)
		:Base(value)
	{

	}

	void print()

	{
		Base::print(); //상위 클래스 이름을 붙여서 호출해야 동일한 함수 호출로 인한 무한루프의 오류에 빠지지 않게 된다
		cout << "I'm derived" << endl;
	}

	friend std::ostream& operator <<(std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b) ; //상속받은 클래스에서 부모 클래스 변수의 메모리 정보를 가지고 있기 때문에 캐스트가 가능함!!!
		out << "This is derived output" << endl;
		return out;
	}
};

int main()
{

	Base base(1);
	//base.print();
	cout << base;

	Derived derived(7);
	//derived.print();
	cout << derived;


	return 0;
}

