//////#include <iostream>
//////using namespace std;
//////int main()
//////{
//////	int a[12];
//////	cout << "Please enter 12 numbers :";
//////	for (int i = 0; i < 13; i++)
//////	{
//////		cin >> a[i];
//////	}
//////	for (int i = 0; i < 13; i++)
//////	{
//////		cout << a[i];
//////	}
//////	cout << "\n";
//////	for (int i = 0; i < 13; i++)
//////	{
//////		if (i % 2 != 0)
//////		{
//////			cout << "The difference between element" << i << "and" << i + 1 << "are:";
//////			cout << a[i + 1] - a[i];
//////			cout << "\n";
//////		}
//////	}
//////
//////	system("pause");
//////	return 0;
//////}