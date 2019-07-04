#pragma once
#include<string>
#include<iostream>

class Person
{
private:
	std::string _name;

public:
	//Person()
	//	:_name("No name")
	//{}

	Person(const std::string & name_in="No name")
		:_name(name_in)
	{}

	void setName(const std::string& name_in)
{
	_name = name_in;
}

std::string getName() const
{
	return _name;
}

void dnt() const
{
	std::cout << _name << " is do noting" << std::endl;
}
};