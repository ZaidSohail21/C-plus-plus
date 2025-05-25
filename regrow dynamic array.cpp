//#include <iostream>
//#include <fstream>
//using namespace std;
//int** create_2d_array(ifstream&, int r, int s);
//void show(int**, int, int);
//void delete_array(int** p, int r);
//int main()
//{
//	int size = 0;
//	int n;
//	int rows;
//	int cols;
//	int** ptr;
//	ifstream file;
//	file.open("zaid.txt");
//	if (file.is_open())
//	{
//		cout << "open successfully in opening the file" << endl;
//	}
//	else
//	{
//		cout << "Error in opening the file" << endl;
//	}
//	file >> rows >> cols;
//	cout << "The numbers of rows in it are " << rows << endl;
//	cout << "the numbers of column present in it are " << cols << endl;
//	int** dptr=create_2d_array(file, rows, cols);
//	show(dptr, rows, cols);
//	delete_array(dptr, rows);
//	file.close();
//	system("pause");
//	return 0;
//}
//int** create_2d_array(ifstream & ifin, int r, int c)
//{
//
//	
//	int** ptr = new int*[r];
//	
//	for (int i = 0; i < r; i++)
//	{
//		ptr[i] = new int[c];
//		for (int j = 0; j < c; j++)
//		{
//
//			ifin >> ptr[i][j];
//			cout << ptr[i][j];
//		}
//	}
//	ifin.close();
//	return ptr;
//}
//void show(int** pp, int r, int c)
//{
//	for (int i = 0;i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << pp[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//void delete_array(int** p, int r)
//{
//	for (int i = 0; i < r; i++)
//	{
//		cout << "deleting the row " << i << endl;
//		delete p[i];
//	}
//	delete p;
//}