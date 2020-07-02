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
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****"<< endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}

void addperson(PersonAddress* t)
{
	cout << "请输入姓名" << endl;
	string name;
	cin >> name;
	t->arr[t->Size].Name = name;

	cout << "请输入性别" << endl;
	cout << "1---男" << endl;
	cout << "2---女" << endl;
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
			cout << "请重新输入" << endl;
		}
	}

	cout << "请输入年龄" << endl;
	int age;
	cin >> age;
	t->arr[t->Size].Age = age;

	cout << "请输入电话号码" << endl;
	string phone;
	cin >> phone;
	t->arr[t->Size].Phone = phone;

	cout << "请输入家庭地址" << endl;
	string address;
	cin >> address;
	t->arr[t->Size].Address = address;

	t->Size++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
}

void showperson(PersonAddress* t)
{
	if (t->Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < t->Size; i++)
		{
			cout << "姓名：" << t->arr[i].Name << "\t";
			cout << "性别：" << (t->arr[i].Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << t->arr[i].Age << "\t";
			cout << "电话：" << t->arr[i].Phone << "\t";
			cout << "地址：" << t->arr[i].Address << endl;
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
	cout << "请输入你要删除的联系人" << endl;
	string name1;
	cin >> name1;
	int ret = exist(t, name1);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < t->Size-1; i++)
		{
			t->arr[i] = t->arr[i + 1];
		}
		t->Size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}

void findperson(PersonAddress* t)
{
	cout << "请输入要查找人的姓名" << endl; 
	string name2;
	cin >> name2;
	int ret = exist(t, name2);
	if (ret != -1)
	{
		cout << "姓名：" << t->arr[ret].Name << "\t";
		cout << "性别：" << (t->arr[ret].Sex == 1 ? "男" : "女" )<<"\t" ;
		cout << "年龄：" << t->arr[ret].Age << "\t";
		cout << "电话：" << t->arr[ret].Phone << "\t";
		cout << "地址：" << t->arr[ret].Address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void modifyperson(PersonAddress* t)
{
	string namex;
	cout << "请输入需要修改的联系人" << endl;
	cin >> namex;
	int ret = exist(t, namex);
	if (ret != -1)
	{
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		t->arr[ret].Name = name;

		cout << "请输入性别" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
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
				cout << "请重新输入" << endl;
			}
		}

		cout << "请输入年龄" << endl;
		int age;
		cin >> age;
		t->arr[ret].Age = age;

		cout << "请输入电话号码" << endl;
		string phone;
		cin >> phone;
		t->arr[ret].Phone = phone;

		cout << "请输入家庭地址" << endl;
		string address;
		cin >> address;
		t->arr[ret].Address = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void cleanperson(PersonAddress* t)
{
	t->Size = 0;
	cout << "清空成功" << endl;
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
			cout << "欢迎下次使用" << endl;
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