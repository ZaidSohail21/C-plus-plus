//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//int main()
//{
//	ofstream write;
//	string name[30];
//	int count=0;
//	int gpa[30];
//	char a = 'y';
//	string b;
//	int max=0;
//	write.open("Anzar.txt");
//	int i = 0;
//	while (a=='y')
//	{
//		cout << "Enter the name : ";
//		cin >> name[i];
//		write << name[i] << " ";
//		cout << "Enter the Cgpa : ";
//		cin >> gpa[i];
//		write << gpa[i] << " ";
//		cout << "If you wanted to continue press y and if wanted to exit press n : ";
//		cin >> a;
//		i++;
//	}
//	ifstream read;
//	read.open("Anzar.txt");
//	while (!read.eof())
//	{
//		read >> name[i] >> gpa[i];
//		cout << name[i] << gpa[i];
//		cout << endl;
//		if (gpa[i] >3)
//		{
//			count++;
//		}
//		if (gpa[i]>max)
//		{
//			max = gpa[i];
//			b = name[i];
//		}
//		i++;
//
//	}
//	cout << "Student having more than 3 gpa are : " << count << endl;
//	cout << b << " has the highest gpa of " << max << " in the class";
//	read.close();
//	write.close();
//	
//
//	return 0;
//}