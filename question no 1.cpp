//#include<iostream>
//#include<fstream>
//#include <algorithm>
//
//void TotalNumbersLine1(int* count1, int* count2);
//void ConvertIntointArray(int* dataLine1, int count1, int* dataLine2, int count2);
//int Sum(int* dataLine1, int count1, int* dataLine2, int count2, int* result, int count3);
//void PrintInLine3(int* result, int count3, int carry);
//
//using namespace std;
//int main()
//{
//	int count1 = 0;
//	int count2 = 0;
//
//	TotalNumbersLine1(&count1, &count2);
//
//	cout << "Total Numbers In Line1 of your Given Input File:" << count1 << endl;
//	cout << "Total Numbers In Line2 of your Given Input File:" << count2 << endl;
//
//	int* Line1 = new int[count1];
//	int* Line2 = new int[count2];
//
//	
//	for (int i = 0; i<count1; i++)
//	{
//		Line1[i] = 0;
//	}
//	for (int i = 0; i<count2; i++)
//	{
//		Line2[i] = 0;
//	}
//
//	cout << endl;
//	ConvertIntointArray(Line1, count1, Line2, count2);
//
//	int count3 =  max(count1, count2);
//
//	int* result = new int[count3];
//
//
//	for (int i = 0; i<count3; i++)
//	{
//		result[i] = 0;
//	}
//
//	int carry = Sum(Line1, count1, Line2, count2, result, count3);
//
//	cout << endl;
//	cout << "The Result Array: ";
//	if (carry != 0)
//	{
//		cout << carry << " ";
//	}
//
//	for (int i = 0; i<count3; i++)
//	{
//		cout << result[i] << " ";
//	}
//
//	PrintInLine3(result, count3, carry);
//
//	int a;
//	cin >> a;
//
//}
//
//void TotalNumbersLine1(int* count1, int* count2)
//{
//	ifstream read;
//	read.open("Input1.txt");
//	if (read.is_open())
//	{
//		char numbers[200];
//		read.getline(numbers, 200);
//		for (int i = 0; i<200; i++)
//		{
//			
//			if (numbers[i] == '\0')
//			{
//				break;
//			}
//			(*count1)++;
//		}
//
//		char numbers2[200];
//		read.getline(numbers2, 200);
//		for (int i = 0; i<200; i++)
//		{
//			
//			if (numbers2[i] == '\0')
//			{
//				break;
//			}
//			(*count2)++;
//		}
//
//		read.close();
//	}
//	else
//	{
//		cout << "Error in opening File!" << endl;
//	}
//}
//
//void ConvertIntointArray(int* dataLine1, int count1, int* dataLine2, int count2)
//{
//	ifstream read;
//	read.open("Input1.txt");
//
//	count1 = count1 + 1;
//	count2 = count2 + 1;
//
//	char* numbers=new char[count1];
//	char *numbers2=new char[count2];
//
//	dataLine1[count1 - 1];
//	dataLine2[count2 - 1];
//
//	if (read.is_open())
//	{
//		read.getline(numbers, count1);
//		for (int i = 0; i<count1 - 1; i++)
//		{
//		
//			dataLine1[i] = int(numbers[i]) - int('0');   
//		}
//
//		read.getline(numbers2, count2);
//		for (int i = 0; i<count2 - 1; i++)
//		{
//			
//			dataLine2[i] = int(numbers2[i]) - int('0');
//		}
//		read.close();
//	}
//	else
//	{
//		cout << "Error in opening File!" << endl;
//	}
//
//	cout << "Data from Line1 Converted into an integer Array: ";
//	for (int i = 0; i<count1 - 1; i++)
//	{
//		cout << dataLine1[i] << " ";
//	}
//	cout << endl;
//
//	cout << "Data from Line2 Converted into an integer Array: ";
//	for (int i = 0; i<count2 - 1; i++)
//	{
//		cout << dataLine2[i] << " ";
//	}
//	cout << endl;
//}
//
//int Sum(int* dataLine1, int count1, int* dataLine2, int count2, int* result, int count3)
//{
//	int i = count1 - 1;
//	int j = count2 - 1;
//	int k = count3 - 1;
//	int carry = 0;
//
//	while (k >= 0)
//	{
//		int sum = carry;
//
//		if (i >= 0) 
//		{
//			sum = sum + dataLine1[i];
//		}
//
//		if (j >= 0) 
//		{
//			sum = sum + dataLine2[j];
//		}
//
//		int q = sum / 10;  
//		int r = sum % 10;  
//
//		result[k] = r;
//		carry = q;
//		i--;
//		j--;
//		k--;
//	}
//	return carry;
//}
//
//void PrintInLine3(int* result, int count3, int carry)
//{
//	ofstream write;
//	write.open("Input1.txt", ios::app);
//	if (write.is_open())
//	{
//		write << endl;
//		if (carry != 0)
//		{
//			write << carry;
//		}
//		for (int i = 0; i<count3; i++)
//		{
//			write << result[i];
//		}
//		write.close();
//	}
//	else
//	{
//		cout << "Unable to Access File!" << endl;
//	}
//}