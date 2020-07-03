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
	{"Áõ±¸",22,"ÄÐ"},
	{"¹ØÓð",21,"ÄÐ"},
	{"ÕÅ·É",19,"ÄÐ"},
	{"ÕÔÔÆ",21,"ÄÐ"},
	{"õõ²õ",18,"Å®"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	change(h, len);
	point(h, len);
	system("pause");
	return 0;
}