//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//int get_negative_numbers(ifstream&, string);
//int *create_an_1D_array(ifstream& fin, string name1, int nega);
//void display(int *ptr, int n);
//int main()
//{
//	cout << "Hello" << endl;
//	string fname = "numbers.txt";
//	ifstream ifile;
//	ifile.open(fname);
//	bool status = ifile.is_open();
//	if (status == 1)
//	{
//		cout << "File named numbers.txt opened successufly" << endl;
//	}
//	else
//	{
//		cout << "File named numbers.txt NOT opened successufly" << endl;
//	}
//
//	int negative = get_negative_numbers(ifile, fname);
//	cout << "count of negative numbers: " << negative << endl;
//	int *my_array = create_an_1D_array(ifile,fname, negative);
//	display(my_array, negative);
//	cout << endl;
//	system("pause");
//	return 0;
//	
//}  
//int get_negative_numbers(ifstream& ifile, string fname)
//{
//	int n;
//	int ncnt = 0;
//	while (!ifile.eof())
//	{
//
//		ifile >> n;
//		if (n < 0)
//		{
//			ncnt++;
//		}
//		/*if (ifile.eof())
//		{
//			break;
//		}*/
//
//
//	} //end of while
//	ifile.close();
//	return ncnt;
//}
//int *create_an_1D_array(ifstream& fin, string name1, int nega)
//{
//	int n;
//	int j = 0;
//	int*ptr = new int[nega];
//	while (!fin.eof())
//	{
//		fin >> n;
//
//		if (n < 0)
//		{
//			ptr[j] = n;
//			cout << ptr[j] << "  ";
//			j++;
//		}
//		fin.close();
//		return ptr;
//	}
//}
//void display(int *ptr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << ptr[i] << "  ";
//	}
//}