#include <iostream>
#include <string>
using namespace std;

class Test
{
public:
	void setName(const char* name)
	{
		strcpy(this->name, name);
		//this->name = name;
	}
	void setAge(short age)
	{
		this->age = age;
	}
	char* showName()
	{
		return this->name;
	}
	short showAge()
	{
		return age;
	}
	//protected:
private:
	char name[20];
	short age;
};

int main()
{
	Test t;
	t.setAge(20);
	t.setName("lixin");
	char* arr;
	arr = t.showName();
	cout << t.showAge() << endl;
	cout << arr << endl;
	return 0;
}