#include <iostream>
using namespace std;


class Mother //generalized class
{
private: 
	int _i;

//protected: //private특성은 유지하면서 자식 class에는 접근 권한을 줌
//	int _i;

public:
	Mother() //자식클래스의 생성자 호출시 발생하는 문제를 제거하기위해 의도적으로 default생성자를 선언해줌
		:_i(0)
	{}
	Mother(const int& i_in)
		:_i(i_in)
	{
		cout << "Mother class value:" << endl;
	}
	void setVal(int val_in)
		
	{
		_i = val_in;
	}

	int getVal()
	{
		return _i;
	}
};

class Child :public Mother //derived class
{

private:
	double _d;

public:

	Child(const int& i_in, const double& d_in)
		//:_i(i_in), _d(d_in) //child 클래스 생성자 호출시 _i의 메모리를 가지고있지 않아서 초기화가 불가능
		:Mother(i_in), _d(d_in)
	{//부모클래스의 생성자를 정의할 경우 자식 클래스의 생성자가 자동으로 호출하던 default 부모 클래스 생성자 호출이 불가능해져서 오류 발생
		//Mother::setVal(i_in);
		//_d = d_in;
	}
	void setVal(const int& i_in, const double& d_in)
	{
		Mother::setVal(i_in);
		_d=d_in;
	}
	void setVal(const double& val_in)

	{
		_d = val_in;
	}

	double getVal()
	{
		return _d;
	}
};

class Daughter :public Mother
{

};

class Son :public Mother
{
	
};

int main()
{
	Mother mother(777);
	//mother.setVal(2);
	cout << mother.getVal() << endl;
	
	Child child(1024, 128);
	//child.Mother::setVal(1111);
	//child.setVal(123);
	cout << child.Mother::getVal() << endl;
	cout << child.getVal() << endl;

	return 0;
}

