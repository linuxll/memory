#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct Hero
{
	string name;
	int age;
	string sex;
};
void change(Hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				Hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void point(Hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].name << "  " << arr[i].age << "  " << arr[i].sex << endl;
	}
}
int main()
{
	Hero h[5] =
	{
	{"����",22,"��"},
	{"����",21,"��"},
	{"�ŷ�",19,"��"},
	{"����",21,"��"},
	{"����",18,"Ů"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	change(h, len);
	point(h, len);
	system("pause");
	return 0;
}