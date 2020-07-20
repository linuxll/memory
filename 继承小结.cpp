//同名成员处理
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	int m_A;
//	Base()
//	{
//		m_A = 100;
//	}
//	void fun()
//	{
//		cout << "m_A=" << m_A << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	int m_A;
//	Son()
//	{
//		m_A = 1200;
//	}
//	void fun()
//	{
//		cout << "m_A=" << m_A << endl;
//	}
//};
//int main()
//{
//	Son s;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//	s.fun();
//	s.Base::fun();
//	system("pause");
//	return 0;
//}

//同名静态成员处理
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	static int m_A;
//	static void fun()
//	{
//		cout << m_A << endl;
//	}
//};
//int Base::m_A = 100;
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void fun()
//	{
//		cout << m_A << endl;
//	}
//};
//int Son::m_A = 200;
//int main()
//{
//	Son s;
//	cout << "通过对象调用" << endl;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//
//	cout << "通过类名调用" << endl;
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//
//	cout << "通过对象调用静态函数" << endl;
//	s.fun();
//	s.Base::fun();
//
//	cout << "通过类名调用静态函数" << endl;
//	Son::fun();
//	Son::Base::fun();
//	system("pause");
//	return 0;
//}

//多继承语法
//#include<iostream>
//using namespace std;
//class Base1
//{
//public:
//	int m_A, m_C;
//	Base1()
//	{
//		m_A = 10;
//		m_C = 10;
//	}
//};
//class Base2
//{
//public:
//	int m_B, m_C;
//	Base2()
//	{
//		m_B = 20;
//		m_C = 20;
//	}
//};
//class Son :public Base1, public Base2
//{
//public:
//	int m_D;
//	Son()
//	{
//		m_D = 30;;
//	}
//};
//int main()
//{
//	Son s;
//	cout << s.m_D << endl;
//	cout << s.m_A << endl;
//	cout << s.Base2::m_C << endl;
//	system("pause");
//	return 0;
//}

//菱形继承
//#include<iostream>
//using namespace std;
//class ani
//{
//public:
//	int age;
//};
//class she :virtual public ani
//{
//
//};
//class he :virtual public ani
//{
//
//};
//class son :public she, public he
//{
//
//};
//int main()
//{
//	son s;
//	s.age = 10;
//	cout << s.age << endl;
//	system("pause");
//	return 0;
//}