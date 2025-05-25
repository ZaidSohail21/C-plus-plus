#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch[100];
	char ch2[100];
	int a = 0;
	int b = 0;
	cout << "Enter the Source file :";
	cin.get(ch, 100);
	int i = 0;
	cout << "Destructive file :";
	while (ch[i] != '\0')
	{
		ch2[i] = ch[i];
		cout << ch2[i];
		i++;
	}
	return 0;
}