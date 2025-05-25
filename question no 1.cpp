//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	ofstream file;
//	file.open("sohail.txt");
//	string name[100] = {};
//	string department[100] = {};
//	int salary[100];
//	int i = 0;
//	char a ='y';
//	char b;
//	char c;
//	cout << "If you wanted to continue you can press y and if you wanted to exit press n ";
//	cin >> a;
//	if (a == 'y')
//	{
//		cout << "Press a if you wanted to add a new record :";
//		cout << "Press p if you wanted to print all results on the console :";
//		cout << "press f if you wanted to find thw maximum salary ";
//		cin >> b;
//		if (b == 'a')
//		{
//			do
//			{
//				cout << "Enter the name of the person :";
//				cin >> name[i];
//				file << name[i] << " ";
//				cout << "Enter the salary of that " << name[i] << " : ";
//				cin >> salary[i];
//				file << salary[i] << " ";
//				cout << "Enter the department of that" << name[i] << " : ";
//				cin >> department[i];
//				file << department[i] << " ";
//				cout << "If you wanted to continue you can press y and if you wanted to exit press n ";
//				cin >> c;
//				
//			} while (c == 'y');
//
//		}
//		if (b == 'p')
//		{
//			while (!file.eof())
//			{
//				cout << name[i] << salary[i] << department[i];
//				i++;
//				read.open("Employee.txt");
//				if (read.is_open())
//				{
//					while (!read.eof())
//					{
//						//						getline(read, line, '\n');
//						//						cout<<line<<endl;
//						read >> name >> salary >> department;
//						cout << name << " " << salary << " " << department;
//						read >> name >> salary >> department;
//					}
//					read.close();
//					break;
//				}
//				else
//				{
//					cout << "Unable to Find the File";
//				}
//			}
//		}
//	
//	}
//	else if (a == 'n')
//	{
//		cout << "Program exited successfully!";
//	}
//	else
//	{
//		cout << "Invalid input typed! ";
//	}
//	while (c == 'y')
//	{
//		
//		cout << "Enter the name of the person :";
//		cin >> name[i];
//		file << name[i] << " ";
//		cout << "Enter the salary of that " << name[i] <<" : ";
//		cin >> salary[i];
//		file << salary[i] << " ";
//		cout << "Enter the department of that" << name[i] << " : ";
//		cin >> department[i];
//		file << department[i] << " ";
//		cout << "If you wanted to continue you can press y and if you wanted to exit press n ";
//		cin >> c;
//	}
////	return 0;
}