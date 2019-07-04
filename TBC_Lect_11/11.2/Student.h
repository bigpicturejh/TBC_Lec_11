
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
		: Person(name_in), _intel(intel_in) //�θ�Ŭ������ private��� ���� �ʱ�ȭ�� �θ� Ŭ������ �����ڸ� ȣ���Ͽ� �ʱ�ȭ �ؾ���!
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
		std::cout << getName() << " is studying" << std::endl; //�ڽ� class���� �θ� class�� private ����� �����ϱ� ���� �Լ��� ȣ���ϴ� ����� ����ؾ���!!
	}

	friend std::ostream& operator <<(std::ostream& out, const Student student)
	{
		/*out << student._name << " " << student._intel;*/
		out << student.getName() << " " << student._intel;
		return out;
	}
};