//计算器类
//#include<iostream>
//using namespace std;
//class cal
//{
//public:
//	virtual int getline()
//	{
//		return 0;
//	}
//	int num1, num2;
//};
//class add:public cal
//{
//public:
//	int getline()
//	{
//		return num1 + num2;
//	}
//};
//class sub :public cal
//{
//public:
//	int getline()
//	{
//		return num1 - num2;
//	}
//};
//int main()
//{
//	cal* abc = new add;
//	abc->num1 = 100;
//	abc->num2 = 100;
//	cout << abc->getline() << endl;
//	delete abc;
//	abc = new sub;
//	abc->num1 = 20;
//	abc->num2 = 10;
//	cout << abc->getline() << endl;
//	delete abc;
//	return 0;
//}

//制作饮品
//#include<iostream>
//using namespace std;
//class Cup
//{
//public:
//	virtual void fun1() = 0;
//	virtual void fun2() = 0;
//	virtual void fun3() = 0;
//	virtual void fun4() = 0;
//	void make()
//	{
//		fun1();
//		fun2();
//		fun3();
//		fun4();
//	}
//};
//class coffee:public Cup
//{
//public:
//	void fun1()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	void fun2()
//	{
//		cout << "煮咖啡" << endl;
//	}
//	void fun3()
//	{
//		cout << "倒入咖啡" << endl;
//	}
//	void fun4()
//	{
//		cout << "加入牛奶" << endl;
//	}
//};
//class tea:public Cup
//{
//public:
//	void fun1()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	void fun2()
//	{
//		cout << "温茶" << endl;
//	}
//	void fun3()
//	{
//		cout << "倒茶" << endl;
//	}
//	void fun4()
//	{
//		cout << "加入茶叶" << endl;
//	}
//};
//void dowork(Cup* abc)
//{
//	abc->make();
//	delete abc;
//}
//int main()
//{
//	dowork(new tea);
//	cout << "-----------------" << endl;
//	dowork(new coffee);
//	return 0;
//}

//虚析构和纯虚析构
//#include<iostream>
//#include<string>
//using namespace std;
//class Ani
//{
//public:
//	Ani()
//	{
//		cout << "Ani的构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
//	/*virtual ~Ani()
//	{
//		cout << "Ani的虚析构函数调用" << endl;
//	}*/
//	virtual ~Ani() = 0;
//};
//Ani::~Ani()
//{
//	cout << "Ani的纯虚析构函数调用" << endl;
//}
//class Cat:public Ani
//{
//public:
//	Cat(string m_name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		name = new string(m_name);
//	}
//	string* name;
//	void speak()
//	{
//		cout << *name << "小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat的析构函数调用" << endl;
//		if (name != NULL)
//		{
//			delete name;
//			name = NULL;
//		}
//	}
//};
//void dowork(Ani *abc)
//{
//	abc->speak();
//	delete abc;
//}
//int main()
//{
//	dowork(new Cat("Tom"));
//	return 0;
//}

//电脑组装
//#include<iostream>
//using namespace std;
//class CPU
//{
//public:
//	virtual void cal() = 0;
//};
//class VC
//{
//public:
//	virtual void show() = 0;
//};
//class AD
//{
//public:
//	virtual void store() = 0;
//};
//class Computer
//{
//private:
//	CPU* m_cpu;
//	VC* m_vc;
//	AD* m_ad;
//public:
//	Computer(CPU *cpu,VC* vc,AD* ad)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_ad = ad;
//	}
//	void work()
//	{
//		m_cpu->cal();
//		m_vc->show();
//		m_ad->store();
//	}
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_ad != NULL)
//		{
//			delete m_ad;
//			m_ad = NULL;
//		}
//	}
//};
//class intercpu:public CPU
//{
//public:
//	void cal()
//	{
//		cout << "inter的cpu开始运行" << endl;
//	}
//};
//class intervc :public VC
//{
//public:
//	void show()
//	{
//		cout << "inter的vc开始运行" << endl;
//	}
//};
//class interad :public AD
//{
//public:
//	void store()
//	{
//		cout << "inter的ad开始运行" << endl;
//	}
//};
//int main()
//{
//	Computer c(new intercpu,new intervc,new interad);
//	c.work();
//	cout << "------------------" << endl;
//	Computer* as = new Computer(new intercpu, new intervc, new interad);
//	as->work();
//	delete as;
//	system("pause");
//	return 0;
//}