#pragma once

#include "Person.h"

class Teacher : public Person
{
private:


public:
	Teacher(const std::string& name_in = "No name")
		//:_name(name_in)
		:Person(name_in)
	{
	
	}

	//void setName(const std::string& name_in)
	//{
	//	_name = name_in;
	//}

	//std::string getName()
	//{
	//	return _name;
	//}

	void teach()
	{
		std::cout << getName() << " is teaching" << std::endl; //자식 class에서 부모 class의 private 멤버에 접근하기 위해 함수로 호출하는 방법을 사용해야함!!
	}



	friend std::ostream& operator <<(std::ostream& out, const Teacher& teacher)
	{
		//out << teacher._name;
		out << teacher.getName();
		return out;
	}
};