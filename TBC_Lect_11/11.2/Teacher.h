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
		std::cout << getName() << " is teaching" << std::endl; //�ڽ� class���� �θ� class�� private ����� �����ϱ� ���� �Լ��� ȣ���ϴ� ����� ����ؾ���!!
	}



	friend std::ostream& operator <<(std::ostream& out, const Teacher& teacher)
	{
		//out << teacher._name;
		out << teacher.getName();
		return out;
	}
};