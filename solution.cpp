//#include <iostream>
//using namespace std;
//
//void Menu();
//
//void AddElement(int **&, int *&, int, int);
//
//void RemoveElement(int **&, int *&, int);
//
//void PrintArray(int **, int *, int);
//
//void DeleteArray(int **&, int *&, int);
//
//int main()
//{
//	int numRows;
//	cout << "Enter the number of rows: ";
//	cin >> numRows;
//
//	int **jaggedArray = new int *[numRows];
//	int *sizes = new int[numRows];
//
//	for (int i = 0; i < numRows; i++)
//	{
//
//		jaggedArray[i] = 0;
//		sizes[i] = 0;
//	}
//	/*for (int i = 0;i<)*/
//
//	int choice, row, element;
//
//	do
//	{
//		Menu();
//		cin >> choice;
//
//		if (choice == 1)
//		{
//			cout << "Enter the Row on which you want to Add an Element: ";
//			cin >> row;
//			if (row >= 0 && row < numRows)
//			{
//				cout << "Enter the element: ";
//				cin >> element;
//
//				AddElement(jaggedArray, sizes, row, element);
//			}
//			else
//			{
//				cout << "Invalid Input!" << endl;
//			}
//		}
//		else if (choice == 2)
//		{
//			cout << "Enter the row from which you want to Remove an Element: ";
//			cin >> row;
//			if (row >= 0 && row < numRows)
//			{
//				RemoveElement(jaggedArray, sizes, row);
//			}
//			else
//			{
//				cout << "Invalid Input!" << endl;
//			}
//		}
//		else if (choice == 3)
//		{
//			PrintArray(jaggedArray, sizes, numRows);
//		}
//		else if (choice == 4)
//		{
//			DeleteArray(jaggedArray, sizes, numRows);
//			cout << "Array has been Deleted!" << endl;
//		}
//		else
//		{
//			cout << "Invalid Choice! Try again." << endl;
//		}
//	} while (choice != 4);
//
//	return 0;
//}
//
//void Menu()
//{
//	cout << endl;
//	cout << "Menu: " << endl;
//	cout << "Press 1 To Add One Element" << endl;
//	cout << "Press 2 To Remove One Element" << endl;
//	cout << "Press 3 To Print Your Array" << endl;
//	cout << "Press 4 To Exit" << endl;
//	cout << "Enter your Choice: ";
//}
//
//void AddElement(int **&jaggedArray, int *&sizes, int row, int element)
//{
//	int newSize = sizes[row] + 1;
//
//	int *newRow = new int[newSize];
//
//	for (int i = 0; i < sizes[row]; i++)
//	{
//		newRow[i] = jaggedArray[row][i];
//	}
//
//	newRow[newSize - 1] = element;
//
//	delete[] jaggedArray[row];
//	jaggedArray[row] = newRow;
//	sizes[row] = newSize;
//}
//
//void RemoveElement(int **&jaggedArray, int *&sizes, int row)
//{
//	if (sizes[row] == 0)
//	{
//		cout << "Row " << row << " is already empty.\n";
//		return;
//	}
//
//	int newSize = sizes[row] - 1;
//
//	int *newRow = new int[newSize];
//
//	for (int i = 0; i < newSize; i++)
//	{
//		newRow[i] = jaggedArray[row][i];
//	}
//
//	delete[] jaggedArray[row];
//	jaggedArray[row] = newRow;
//	sizes[row] = newSize;
//	cout << "One Element has been Deleted from Row : " << row << endl;
//}
//
//void PrintArray(int **jaggedArray, int *sizes, int numRows)
//{
//	for (int i = 0; i < numRows; i++)
//	{
//		cout << "Row " << i << ": ";
//
//		for (int j = 0; j < sizes[i]; ++j)
//		{
//			cout << jaggedArray[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void DeleteArray(int **&jaggedArray, int *&sizes, int numRows)
//{
//	for (int i = 0; i < numRows; i++)
//	{
//		delete[] jaggedArray[i];
//	}
//
//	delete[] jaggedArray;
//	delete[] sizes;
//}
//#include <iostream>
//using namespace std;
//
//int*create_1d(int);
//
//int**create_2d(int);
//
//void input(int r, int*ptr, int**dptr);
//
//void RemoveElement(int**dptr,int* ptr,int r);
//
//void display(int r, int*ptr, int**dptr);
//
//void DeleteArray(int **dptr, int r);
//
//int main()
//{
//	int rows = 0;
//	cout << "Enter the rows you wamted to add : ";
//	cin >> rows;
//	int* number = NULL;
//	number=	create_1d(rows);
//	int** array = NULL;
//	array= create_2d(rows);
//	// taking the inputs from the user
//	input(rows, number, array);
//	//displaying the array
//	display(rows, number, array);
//	// deleting the array for memory leakage
//	DeleteArray(array, rows);
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
//int*create_1d(int r)
//{
//	int*ptr = new int[r];
//	return ptr;
//}
//int**create_2d(int r)
//{
//	int** dptr = new int*[r];
//	return dptr;
//}
//void input(int r, int*ptr, int**dptr)
//{
//	char ch = 'v';
//	for (int i = 0; i < r; i++)
//	{
//		cout << "Enter the number you wanted to add in row " << i << " : ";
//		cin >> ptr[i];
//		dptr[i] = new int[ptr[i]];
//	}
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < ptr[i]; j++)
//		{
//			cout << "Enter v for continue and press x to delete element  : ";
//			cin >> ch;
//			if (ch == 'v')
//			{
//				cout << "Enter the val  :";
//				cin >> dptr[i][j];
//			}
//			else if(ch=='x')
//			{
//				cout << "Enter the row from which you want to Remove an Element: ";
//				cin >> r;
//				RemoveElement(dptr, ptr, r);
//				
//			}
//			else
//			{
//				cout << "Enter a valid character" << endl;
//			}
//		}
//	}
//}
//void RemoveElement(int**dptr, int* ptr, int r)
//{
//		if (ptr[r] == 0)
//		{
//			cout << "Row " << r << " is already empty.\n";
//			return;
//		}
//}
//
//void display(int r, int*ptr, int**dptr)
//{
//	for (int i = 0; i < r; i++)
//	{
//		cout << "Array " << i << " : ";
//		for (int j = 0; j < ptr[i]; j++)
//		{
//			cout << dptr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//void DeleteArray(int **dptr, int r)
//{
//	for (int i = 0; i < r; i++)
//	{
//		cout << "Deleting thr row " << i <<" for memory leakage" <<endl;
//		delete[] dptr[i];
//	}
//
//	delete dptr;
//}