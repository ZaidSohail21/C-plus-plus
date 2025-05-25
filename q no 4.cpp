#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch[100];
	int a = 0;
	cout << "enter the words you wanted to enter :";
	cin.get(ch, 100);
	int i = 0;
	while (ch[i] != '\0')
	{
		if (i%2==0)
		{
			cout << ch[i];
		}
		
		i++;
		a++;
	}
	cout << "the numbers of the length of the characters are :" << a;
	return 0;
}