//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	ofstream write;
//	ifstream read;
//	write.open("write.txt", ios::app);
//	int max = 0;
//	read.open("write.txt");
//	string name[100];
//	string department[100];
//	string name2[100];
//	string department2[100];
//	char x;
//	char b = 'x';
//	int i = 0;
//	int salary[100];
//	int salary2[100];
//	char a;
//	cout << "If you wanted to continue press y and if you not wanted to continue press n :";
//	cin >> a;
//	if (a == 'y')
//	{
//		do
//		{
//
//			cout << "press a if you wanted to add 5 records in it" << endl;;
//			cout << "Press ‘P’ : Print all records on console." << endl;
//			cout << "Press ‘E’ : Find the employee which has max salary on the console." << endl;
//			cout << "Press ‘D’ : Department wise searching." << endl;
//			cout << "Press ‘R’ : Write all the record into another file except the one who is going to leave the department." << endl;
//			cout << "Press ‘X’ : exit." << endl;
//			cin >> b;
//			if (b == 'p')
//			{
//				while (!read.eof())
//				{
//					read >> name[i] >> salary[i] >> department[i];
//					cout << name[i] << salary[i] << department[i];
//					cout << endl;
//				}
//
//			}
//			else if (b == 'e')
//			{
//				for (int i = 0; i < 5; i++)
//				{
//					read >> name[i] >> salary[i] >> department[i];
//					if (salary[i] > max)
//					{
//						max = salary[i];
//						cout << name[i] << " has the highest salary of " << max << endl;
//					}
//				}
//
//
//			}
//			else if (b == 'r')
//			{
//				for (int i = 0; i < 5; i++)
//				{
//					while (!read.eof())
//					{
//						ofstream write2;
//						write2.open("sample.txt");
//						read >> name[i] >> salary[i] >> department[i];
//						name2[i] = name[i];
//						salary2[i] = salary[i];
//						department2[i] = department[i];
//						write2 << name2[i] << salary2[i] << department2[i];
//						cout << name2[i] << salary2[i] << department2[i];
//						write2.close();
//						i++;
//					}
//
//				}
//
//			}
//			else if (b == 'a')
//			{
//				for (int i = 0; i < 5; i++)
//				{
//					cout << "Enter the name : ";
//					cin >> name[i];
//					write << name[i] << " ";
//					cout << "Enter the Salary : ";
//					cin >> salary[i];
//					write << salary[i] << " ";
//					cout << "Enter the department : ";
//					cin >> department[i];
//					write << department[i] << " ";
//					i++;
//				}
//			}
//		} while (b != 'x');
//	}
//	else
//	{
//		cout << "Program exited sccessfully";
//	}
//	read.close();
//
//	write.close();
//}