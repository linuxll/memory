#include<iostream>
using namespace std;

class Person
{
public:
	int m_a;
	int* h;
	Person()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}
	Person(int a,int b)
	{
		h = new int(b);
		m_a = a;
		cout << "�вι��캯������" << endl;
	}
	Person(Person& p)
	{
		cout << "�������캯������" << endl;
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
		cout << "������������" << endl;
	}
};
int main()
{
	Person p1(18, 160);
	cout << "���䣺" << p1.m_a << "��ߣ�" << *p1.h << endl;
	Person p2(p1);
	cout << "���䣺" << p2.m_a << "��ߣ�" << *p2.h << endl;
	system("pause");
	return 0;
}