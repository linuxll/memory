#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
	Person& fun1(Person &p)
	{
		this->age += p.age;
		return *this;
	}
};
int main()
{
	Person p1(10);
	Person p2(10);
	p1.fun1(p2).fun1(p2);
	cout << p1.age << endl;
	system("pause");
	return 0;
}