//��������
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

//������Ʒ
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
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	void fun2()
//	{
//		cout << "�󿧷�" << endl;
//	}
//	void fun3()
//	{
//		cout << "���뿧��" << endl;
//	}
//	void fun4()
//	{
//		cout << "����ţ��" << endl;
//	}
//};
//class tea:public Cup
//{
//public:
//	void fun1()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	void fun2()
//	{
//		cout << "�²�" << endl;
//	}
//	void fun3()
//	{
//		cout << "����" << endl;
//	}
//	void fun4()
//	{
//		cout << "�����Ҷ" << endl;
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

//�������ʹ�������
//#include<iostream>
//#include<string>
//using namespace std;
//class Ani
//{
//public:
//	Ani()
//	{
//		cout << "Ani�Ĺ��캯������" << endl;
//	}
//	virtual void speak() = 0;
//	/*virtual ~Ani()
//	{
//		cout << "Ani����������������" << endl;
//	}*/
//	virtual ~Ani() = 0;
//};
//Ani::~Ani()
//{
//	cout << "Ani�Ĵ���������������" << endl;
//}
//class Cat:public Ani
//{
//public:
//	Cat(string m_name)
//	{
//		cout << "Cat���캯������" << endl;
//		name = new string(m_name);
//	}
//	string* name;
//	void speak()
//	{
//		cout << *name << "Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat��������������" << endl;
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

//������װ
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
//		cout << "inter��cpu��ʼ����" << endl;
//	}
//};
//class intervc :public VC
//{
//public:
//	void show()
//	{
//		cout << "inter��vc��ʼ����" << endl;
//	}
//};
//class interad :public AD
//{
//public:
//	void store()
//	{
//		cout << "inter��ad��ʼ����" << endl;
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