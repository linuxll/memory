#include<iostream>
using namespace std;

class Person
{
public:
	int m_a;
	int* h;
	Person()
	{
		cout << "默认构造函数调用" << endl;
	}
	Person(int a,int b)
	{
		h = new int(b);
		m_a = a;
		cout << "有参构造函数调用" << endl;
	}
	Person(Person& p)
	{
		cout << "拷贝构造函数调用" << endl;
		m_a = p.m_a;
		h = new int(*p.h);
	}
	~Person()
	{
		if (h != NULL)
		{
			delete h;
			h = NULL;
		}
		cout << "析构函数调用" << endl;
	}
};
int main()
{
	Person p1(18, 160);
	cout << "年龄：" << p1.m_a << "身高：" << *p1.h << endl;
	Person p2(p1);
	cout << "年龄：" << p2.m_a << "身高：" << *p2.h << endl;
	system("pause");
	return 0;
}