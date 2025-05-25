#include<iostream>

using namespace std;

int main()
{
	int x;
	cout << " enter the value of x : ";
	cin >> x;
	int y;
	cout << " enter the value of y :";
	cin >>  y;
	int z;
	cout << " enter the value of z : ";
	cin >> z;
	int a;
	cout << " enter the value of a :";
	cin >> a;
	int sum = 0;
	sum =( x + y + z + a)/4;
	cout << " AVERAGE :" << sum;
	cout << "\n";
	return 0;
}