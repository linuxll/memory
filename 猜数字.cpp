#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int val;


	while (1)
	{
		cin >> val;
		if (num > val)
		{
			cout << "�²��С" << endl;
		}
		else if (num < val)
		{
			cout << "�²����" << endl;
		}
		else
		{
			cout << "��ϲ��ͨ��" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}