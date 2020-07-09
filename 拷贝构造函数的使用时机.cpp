#include<iostream>
using namespace std;
class Person
{
private:
	int age;
public:
	Person()
	{
		cout << "调用默认构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "调用有参构造函数" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "调用拷贝构造函数" << endl;
	}
	~Person()
	{
		cout << "调用析构函数" << endl;
	}
};
void fun1()
{
	Person p1;
	Person p2(10);
	Person p3(p2);
}
void dowork(Person p)
{

}
void fun2()
{
	Person p1(10);
	dowork(p1);
}
Person fun3()
{
	Person p;
	return p;
}
int main()
{
	fun2();
	system("pause");
	return 0;
}