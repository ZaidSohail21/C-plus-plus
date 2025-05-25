
#include <iostream>
using namespace std;
void initializeMatrix(int**& matrix, int rows, int cols);
void inputMatrix(int** matrix, int rows, int cols);
void displayMatrix(int** matrix, int rows, int cols);
void add(int** result1, int** matrix1, int** matrix2, int rows, int cols);
void sub(int** result1, int** matrix1, int** matrix2, int rows, int cols);
void multiply(int** result1, int** matrix1, int** matrix2, int rows, int cols);
void deleteMatrix(int**, int );
int main()
{
	int row1, row2, col1, col2;
	int**matrix1;
	int**matrix2;
	
	cout << "Enter the rows of first matrix : ";
	cin >> row1;
	cout << "Enter the column of first matrix : ";
	cin >> col1;
	cout <<"Enter the rows of second matrix : ";
	cin >> row2;
	cout << "Enter the columns of second matrix : ";
	cin >> col2;
	if (row1 != row2 || col1 != col2)
	{
		cout << "Matrix operations (addition, subtraction, element-wise multiplication) are not possible with the given dimensions." << endl;
		system("pause");
		return 0;
	}
	initializeMatrix( matrix1,  row1,  col1);
	initializeMatrix( matrix2,  row2,  col2);
	cout << "Matrix 1 : " << endl;
	inputMatrix(matrix1, row1, col1);
	cout << "Matrix 2 : " << endl;
	inputMatrix(matrix2, row2, col2);
	int**result=NULL;
	cout << "The addition of 1st and 2nd matrix is : " << endl;
	add(result, matrix1, matrix2, row1, col1);
	displayMatrix(matrix1, row1, col1);
	cout << "The subtraction of 1st and 2nd matrix is : " << endl;
	sub(result, matrix1, matrix2, row1, col1);
	displayMatrix(matrix1, row1, col1);
	cout << "The multiplification of 1st and 2nd matrix is : " << endl;
	multiply(result, matrix1, matrix2, row1, col1);
	displayMatrix(matrix1, row1, col1);
	deleteMatrix(result, row1);
	deleteMatrix(matrix1, row1);
	deleteMatrix(matrix2, row2);
	cout << "Heloo " << endl;
	system("pause");
	return 0;
}
void initializeMatrix(int**& matrix, int rows, int cols)
{
	matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols];
	}
}
void inputMatrix(int** matrix, int rows, int cols)
{
	cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):" << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrix[i][j];
		}
	}
}
void displayMatrix(int** matrix, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void add(int** result1, int** matrix1, int** matrix2, int rows, int cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			result1[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

void sub(int** result1, int** matrix1, int** matrix2, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			result1[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
}

void multiply(int** result1, int** matrix1, int** matrix2, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			result1[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
}
void deleteMatrix(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = NULL;
}
