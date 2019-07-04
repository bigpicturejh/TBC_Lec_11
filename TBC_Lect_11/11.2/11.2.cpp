
#include "Student.h"
#include "Teacher.h"
using namespace std;

 


int main()
{
	Student std("coco");
	std.setName("coco2");
	cout << std.getName() << endl;

	Teacher teacher1(" DR Han");
	teacher1.setName("DR K");

	cout << teacher1.getName() << endl;

	cout << std << endl;
	cout << teacher1 << endl;

	std.dnt();
	teacher1.dnt();

	std.study();
	teacher1.teach();

	Person person;
	person.setName("BOBO");
	person.getName();
	//person.study(); //자식 클래스 고유의 함수는 가져다 사용할 수 없음
	//person.teach();//자식 클래스 고유의 함수는 가져다 사용할 수 없음
	return 0;
}

