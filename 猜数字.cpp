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
			cout << "猜测过小" << endl;
		}
		else if (num < val)
		{
			cout << "猜测过大" << endl;
		}
		else
		{
			cout << "恭喜您通关" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}