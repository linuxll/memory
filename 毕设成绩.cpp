#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct Student
{
	string name;
	int score;
};
struct Teacher
{
	string name;
	Student student[5];
};
void fun1(Teacher arr[], int len)
{
	string x = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		arr[i].name = "Teacher_";
		arr[i].name = arr[i].name + x[i];
		for (int j = 0; j < 5; j++)
		{
			arr[i].student[j].name = "Student_";
			arr[i].student[j].name += x[j];
			int seed = rand() % 101 ;
			arr[i].student[j].score = seed;
		}
	}
}
void fun2(Teacher arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].name << endl;
		for (int j = 0; j < 5;j++)
		{
			cout << "\t" << arr[i].student[j].name << "\t" << arr[i].student[j].score << endl;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	Teacher t[3];
	int len = sizeof(t) / sizeof(t[0]);
	fun1(t, len);
	fun2(t, len);
	system("pause");
	return 0;
}