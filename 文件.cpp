//д�ļ�
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ofstream o;
//	o.open("text.txt", ios::out);
//	o << "����" << endl;
//	o << "��" << endl;
//	o << "18" << endl;
//	o.close();
//	system("pause");
//	return 0;
//}

//���ļ�
//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//int main()
//{
//	ifstream i;
//	i.open("text.txt", ios::in);
//	if (!i.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return 0;
//	}
//
//	/*char buf[1024] = { 0 };
//	while (i >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	/*char buf[1024] = { 0 };
//	while (i.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//		}*/
//
//	/*string buf;
//	while (getline(i, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	char c;
//	while ((c = i.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	i.close();
//	return 0;
//}

//������д�ļ�
//#include<iostream>
//#include<fstream>
//using namespace std;
//class Person
//{
//public:
//	char name[64];
//	int age;
//};
//int main()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	Person p = {"����",18};
//	ofs.write((const char*)& p, sizeof(Person));
//	ofs.close();
//	return 0;
//}

//�����ƶ��ļ�
#include<iostream>
#include<fstream>
using namespace std;
class Person
{
public:
	char name[64];
	int age;
};
int main()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 0;
	}
	Person p;
	ifs.read((char*)& p, sizeof(Person));
	cout << p.name << endl;
	cout << p.age << endl;
	ifs.close();
	return 0;
}