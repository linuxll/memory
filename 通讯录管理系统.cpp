#include<iostream>
#include<string>
#define MAX 1000

using namespace std;

struct Person
{
	string Name;
	int Sex;
	int Age;
	string Phone;
	string Address;
};

struct PersonAddress
{
	Person arr[MAX];
	int Size;
};

void showmeun()
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****"<< endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}

void addperson(PersonAddress* t)
{
	cout << "����������" << endl;
	string name;
	cin >> name;
	t->arr[t->Size].Name = name;

	cout << "�������Ա�" << endl;
	cout << "1---��" << endl;
	cout << "2---Ů" << endl;
	int sex=0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			t->arr[t->Size].Sex = sex;
			break;
		}
		else
		{
			cout << "����������" << endl;
		}
	}

	cout << "����������" << endl;
	int age;
	cin >> age;
	t->arr[t->Size].Age = age;

	cout << "������绰����" << endl;
	string phone;
	cin >> phone;
	t->arr[t->Size].Phone = phone;

	cout << "�������ͥ��ַ" << endl;
	string address;
	cin >> address;
	t->arr[t->Size].Address = address;

	t->Size++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
}

void showperson(PersonAddress* t)
{
	if (t->Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < t->Size; i++)
		{
			cout << "������" << t->arr[i].Name << "\t";
			cout << "�Ա�" << (t->arr[i].Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << t->arr[i].Age << "\t";
			cout << "�绰��" << t->arr[i].Phone << "\t";
			cout << "��ַ��" << t->arr[i].Address << endl;
		}
	}
	system("pause");
	system("cls");
}

int exist(PersonAddress* t, string name)
{
	for (int i = 0; i < t->Size; i++)
	{
		if (t->arr[i].Name == name)
			return i;
	}
	return -1;
}

void deleteperson(PersonAddress* t)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name1;
	cin >> name1;
	int ret = exist(t, name1);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < t->Size-1; i++)
		{
			t->arr[i] = t->arr[i + 1];
		}
		t->Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

void findperson(PersonAddress* t)
{
	cout << "������Ҫ�����˵�����" << endl; 
	string name2;
	cin >> name2;
	int ret = exist(t, name2);
	if (ret != -1)
	{
		cout << "������" << t->arr[ret].Name << "\t";
		cout << "�Ա�" << (t->arr[ret].Sex == 1 ? "��" : "Ů" )<<"\t" ;
		cout << "���䣺" << t->arr[ret].Age << "\t";
		cout << "�绰��" << t->arr[ret].Phone << "\t";
		cout << "��ַ��" << t->arr[ret].Address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void modifyperson(PersonAddress* t)
{
	string namex;
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	cin >> namex;
	int ret = exist(t, namex);
	if (ret != -1)
	{
		string name;
		cout << "����������" << endl;
		cin >> name;
		t->arr[ret].Name = name;

		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				t->arr[ret].Sex = sex;
				break;
			}
			else
			{
				cout << "����������" << endl;
			}
		}

		cout << "����������" << endl;
		int age;
		cin >> age;
		t->arr[ret].Age = age;

		cout << "������绰����" << endl;
		string phone;
		cin >> phone;
		t->arr[ret].Phone = phone;

		cout << "�������ͥ��ַ" << endl;
		string address;
		cin >> address;
		t->arr[ret].Address = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void cleanperson(PersonAddress* t)
{
	t->Size = 0;
	cout << "��ճɹ�" << endl;
	system("pause");
	system("cls");
}

int main()
{
	PersonAddress abc;
	abc.Size = 0;
	int select = 0;

	while (true)
	{
		showmeun();
		cin >> select;
		switch (select)
		{
		case 1:
			addperson(&abc);
			break;
		case 2:
			showperson(&abc);
			break;
		case 3:
			deleteperson(&abc);
			break;
		case 4:
			findperson(&abc);
			break;
		case 5:
			modifyperson(&abc);
			break;
		case 6:
			cleanperson(&abc);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}