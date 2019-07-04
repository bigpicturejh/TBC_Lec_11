
#pragma once

#include "Person.h"

class Student : public Person
{
private:
	
	int _intel; 
	
	//TODO: add more members like adress, phone, favorate ...etc...

public:
	Student(const std::string& name_in = "No name", const int& intel_in = 0)
		//:_name(name_in), _intel(intel_in)
		: Person(name_in), _intel(intel_in) //부모클래스의 private멤버 변수 초기화는 부모 클래스의 생성자를 호출하여 초기화 해야함!
	{}

	/*void setName(const std::string& name_in)

	{
		_name = name_in;
	}*/

	void setIntel(const int& intel_in)
	{
		_intel = intel_in;
	}

	int getIntel()
	{
		return _intel;
	}

	void study()
	{
		std::cout << getName() << " is studying" << std::endl; //자식 class에서 부모 class의 private 멤버에 접근하기 위해 함수로 호출하는 방법을 사용해야함!!
	}

	friend std::ostream& operator <<(std::ostream& out, const Student student)
	{
		/*out << student._name << " " << student._intel;*/
		out << student.getName() << " " << student._intel;
		return out;
	}
};