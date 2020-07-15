//加号运算符重载
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_a = m_a + p.m_a;
//		temp.m_b = m_b + p.m_b;
//		return temp;
//	}*/
//	int m_a;
//	int m_b;
//};
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
//Person operator+(Person& p, const int& num)
//{
//	Person temp;
//	temp.m_a = p.m_a + num;
//	temp.m_b = p.m_b + num;
//	return temp;
//}
//int main()
//{
//	Person p1, p2;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	p2.m_a = 10;
//	p2.m_b = 10;
//	Person p3 = p1 + p2;
//	cout << p3.m_a << endl;
//	cout << p3.m_b << endl;
//	Person p4 = p1 + 100;
//	cout << p4.m_a << endl;
//	cout << p4.m_b << endl;
//	system("pause");
//	return 0;
//}

//左移运算符重载  无法重载为成员函数
//#include<iostream>
//using namespace std;
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	int m_A, m_B;
//};
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << p.m_A << endl;
//	cout << p.m_B << endl;
//	return cout;
//}
//int main()
//{
//	Person p(10,20);
//	cout << p<<endl;
//	system("pause");
//	return 0;
//}

//递增运算符重载
//#include<iostream>
//using namespace std;
//class Person
//{
//	friend Person& operator++(Person& p);
//	friend ostream& operator<<(ostream& cout, Person p);p处不加引用是因为后面p++返回的是一个局部变量
//private:
//	int m_a, m_b;
//public:
//	
//	Person(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//		
//	}
//	/*Person& operator++()
//	{
//		++m_a;
//		++m_b;
//		return *this;
//	}
//	Person operator++(int)
//	{
//		Person old = *this;
//		++* this;
//		return old;
//	}*/
//};
//ostream& operator<<(ostream& cout, Person p)
//{
//	cout << p.m_a << " " << p.m_b << endl;
//	return cout;
//}
//Person& operator++(Person &p)
//{
//	p.m_a++;
//	p.m_b++;
//	return p;
//}
//Person operator++(Person& p, int)
//{
//	Person p1 = p;
//	++p;
//	return p1;
//}
//int main()
//{
//	Person p(10, 10);
//	cout <<++p<< endl;
//	cout << p++ << endl;
//	cout <<p << endl;
//	system("pause");
//	return 0;
//}

//赋值运算符重载  无法重载为全局函数
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	int* m_p;
//	Person(int a)
//	{
//		m_p = new int(a);
//	}
//	Person& operator=(Person &p)
//	{
//		if (m_p != NULL)
//		{
//			delete m_p;
//			m_p = NULL;
//		}
//		m_p = new int(*p.m_p);
//		return *this;
//	}
//	~Person()
//	{
//		if (m_p != NULL)
//		{
//			delete m_p;
//			m_p = NULL;
//		}
//	}
//};
//int main()
//{
//	Person p1(10);
//	Person p2(20);
//	p2 = p1;
//	cout << *p2.m_p << endl;
//	system("pause");
//	return 0;
//}

//关系运算符重载
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string a, int b)
//	{
//		name = a;
//		age = b;
//	}
//	bool operator==(Person& p)
//	{
//		if (name == p.name && age == p.age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
////bool operator==(Person& p1, Person& p2)
////{
////	if (p1.name == p2.name && p1.age == p2.age)
////	{
////		return true;
////	}
////	else
////	{
////		return false;
////	}
////}
//int main()
//{
//	Person p1("张三",12);
//	Person p2("张三", 12);
//	if (p1 == p2)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//	system("pause");
//	return 0;
//}

//函数调用运算符重载
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	void operator()()
//	{
//		cout << "hello world" << endl;
//	}
//};
//int main()
//{
//	Person p;
//	p();
//	system("pause");
//	return 0;
//}