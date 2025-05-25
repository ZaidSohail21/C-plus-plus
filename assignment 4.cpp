//NAME: MUHAMMAD ZAID SOHAIL
//ROLL NO:L1F23BSCS0314
//SECTION: B-12
//ASSIGNMENT: 4

#include <iostream>
using namespace std;

int*create_1d(int);

int**create_2d(int);

void input(int r, int*ptr, int**dptr);

void RemoveElement(int**dptr, int* ptr, int r);

void display(int r, int*ptr, int**dptr);

void DeleteArray(int **dptr, int r);

int main()
{
	int rows = 0;
	cout << "Enter the array you wamted to add : ";
	cin >> rows;
	int* number = NULL;
	number = create_1d(rows);
	int** array = NULL;
	array = create_2d(rows);
	// taking the inputs from the user
	input(rows, number, array);
	//displaying the array
	display(rows, number, array);
	// deleting the array for memory leakage
	DeleteArray(array, rows);
	cout << endl;
	system("pause");
	return 0;
}

int*create_1d(int r)
{
	int*ptr = new int[r];
	return ptr;
}
int**create_2d(int r)
{
	int** dptr = new int*[r];
	return dptr;
}
void input(int r, int*ptr, int**dptr)
{
	char ch = 'v';
	for (int i = 0; i < r; i++)
	{
		cout << "Enter the number you wanted to add in row " << i << " : ";
		cin >> ptr[i];
		dptr[i] = new int[ptr[i]];
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < ptr[i]; j++)
		{
			cout << "Enter v for continue and press x to delete element  : ";
			cin >> ch;
			if (ch == 'v')
			{
				cout << "Enter the val  :";
				cin >> dptr[i][j];
			}
			else if (ch == 'x')
			{
				cout << "Enter the row from which you want to Remove an Element: ";
				cin >> r;
				RemoveElement(dptr, ptr, r);

			}
			else
			{
				cout << "Enter a valid character" << endl;
			}
		}
	}
}
void RemoveElement(int**dptr, int* ptr, int r)
{
	if (ptr[r] == 0)
	{
		cout << "Row " << r << " is already empty.\n";
		return;
	}
}

void display(int r, int*ptr, int**dptr)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Array " << i << " : ";
		for (int j = 0; j < ptr[i]; j++)
		{
			cout << dptr[i][j] << "  ";
		}
		cout << endl;
	}
}
void DeleteArray(int **dptr, int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Deleting thr row " << i << " for memory leakage" << endl;
		delete[] dptr[i];
	}

	delete dptr;
}
