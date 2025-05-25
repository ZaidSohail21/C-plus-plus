#include<iostream>
#include<fstream>
#include <algorithm>
using namespace std;
void TotalNumbersLine1(int* count1, int* count2);
void ConvertIntointArray(int* dataLine1, int count1, int* dataLine2, int count2);
void Sub(int* dataLine1, int count1, int* dataLine2, int count2, int* result, int count3);
void PrintInLine3(int* result, int count3);
void swapArrays(int arr1[], int arr2[], int& size1, int& size2);
int main()
{
	int count1 = 0;
	int count2 = 0;

	TotalNumbersLine1(&count1, &count2);

	int* Line1 = new int[count1];
	int* Line2 = new int[count2];

	//initialing Array with Zero
	for (int i = 0; i<count1; i++)
	{
		Line1[i] = 0;
	}
	for (int i = 0; i<count2; i++)
	{
		Line2[i] = 0;
	}

	cout << endl;
	ConvertIntointArray(Line1, count1,Line2, count2);

	int count3 = max(count1, count2);

	int* result = new int[count3];

	//initialing Array with Zero
	for (int i = 0; i<count3; i++)
	{
		result[i] = 0;
	}

	swapArrays(Line1, Line2, count1, count2);

	Sub(Line1, count1, Line2, count2, result, count3);

	PrintInLine3(result, count3);

	delete[] Line1;
	delete[] Line2;
	delete[] result;
	cout << endl;
	system("pause");
	return 0;
}

void TotalNumbersLine1(int* count1, int* count2)
{
	ifstream read;
	read.open("Input2.txt");
	if (read.is_open())
	{
		char num1[200];
		read.getline(num1, 200);
		for (int i = 0; i<200; i++)
		{
			if (num1[i] == '\0')
			{
				break;
			}
			(*count1)++;
		}

		char num2[200];
		read.getline(num2, 200);
		for (int i = 0; i<200; i++)
		{
			if (num2[i] == '\0')
			{
				break;
			}
			(*count2)++;
		}

		read.close();
	}
	else
	{
		cout << "Error in opening File!" << endl;
	}
}

void ConvertIntointArray(int* dataLine1, int count1, int* dataLine2, int count2)
{
	ifstream read;
	read.open("Input2.txt");

	char* num1=new char[count1 + 1];
	char* num2=new char[count2 + 1];

	if (read.is_open())
	{
		read.getline(num1, count1 + 1);
		for (int i = 0; i<count1; i++)
		{
			dataLine1[i] = int(num1[i]) - int('0');    // ASCII code 
		}

		read.getline(num2, count2 + 1);
		for (int i = 0; i<count2; i++)
		{
			dataLine2[i] = int(num2[i]) - int('0'); // ASCII code 
		}
		read.close();
	}
	else
	{
		cout << "Error in opening File!" << endl;
	}
}

void Sub(int* dataLine1, int count1, int* dataLine2, int count2, int* result, int count3)
{
	int i = count1 - 1;
	int j = count2 - 1;
	int k = count3 - 1;
	int borrow = 0;
	int temp;

	while (i >= 0 && j >= 0)
	{
		temp = dataLine1[i] - borrow;

		if (dataLine2[j] > temp)
		{
			result[k--] = temp + 10 - dataLine2[j];
			borrow = 1;
		}
		else
		{
			result[k--] = temp - dataLine2[j];
			borrow = 0;
		}
		i--;
		j--;
	}

	while (i >= 0)
	{
		temp = dataLine1[i] - borrow;
		if (temp < 0)
		{
			result[k--] = temp + 10;
			borrow = 1;
		}
		else
		{
			result[k--] = temp;
			borrow = 0;
		}
		i--;
	}

	while (k >= 0)
	{
		result[k--] = 0;
	}
}

void PrintInLine3(int* result, int count3)
{
	ofstream write;
	write.open("Input2.txt", ios::app);
	if (write.is_open())
	{
		cout << endl;
		cout << " The Result of the subtration in array 3 is :" << endl;
		

		write << endl;

		for (int i = 0; i<count3; i++)
		{
			write << result[i];
			cout << result[i] << " ";
		}

		write.close();
	}
	else
	{
		cout << "Unable to Access File!" << endl;
	}
}

void swapArrays(int arr1[], int arr2[], int& size1, int& size2) {
	if (size2 > size1) {
		int temp = size1;
		size1 = size2;
		size2 = temp;

		int* tempArr = new int[size1];
		for (int i = 0; i < size1; i++) {
			tempArr[i] = arr1[i];
		}
		for (int i = 0; i < size1; i++) {
			arr1[i] = arr2[i];
		}
		for (int i = 0; i < size2; i++) {
			arr2[i] = tempArr[i];
		}
		delete[] tempArr;
	}
}