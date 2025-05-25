//#include <iostream>
//using namespace std;
//void PrintArray(int* A, int Size);
//void PrintFull2DArray(int** PP, int Size1, int* Sizes);
//int read(int i, int j, int** PP, int Size1, int* Sizes);
//void write(int i, int j, int value, int** PP, int Size1, int* Sizes);
//void Fill2DArrWithSeq(int** PP, int Size1, int* Sizes);
//int main()
//{
//	cout << "Starting" << endl;
//	int** PP;
//	int Size1 = 6;  
//	int* AofP[Size1];
//	PP = AofP;
//	int Sizes[6];
//	for (int i = 0; i<Size1; i++)
//	{
//		cout << "Please input size of array: ";
//		cin >> Sizes[i];
//		AofP[i] = new int[Sizes[i]];
//		cout << AofP[i] << endl;
//	}
//	//check
//	cout << "Checking addresses" << endl;
//	cout << PP << endl;
//	cout << AofP[0] << endl;
//	//
//	for (int i = 0; i<Size1; i++)
//	{
//		PrintArray(AofP[i], Sizes[i]);
//	}
//	cout << endl << endl;
//	PrintFull2DArray(PP, Size1, Sizes);
//	cout << endl << endl;
//	cout << read(2, 3, PP, Size1, Sizes) << endl;
//	cout << endl << endl;
//	cout << "Writing" << endl;
//	int Row, Col, Val;
//	cout << "Row:";
//	cin >> Row;
//	cout << "Col:";
//	cin >> Col;
//	cout << "Value:";
//	cin >> Val;
//	write(Row, Col, Val, PP, Size1, Sizes);
//	cout << endl << endl;
//	PrintFull2DArray(PP, Size1, Sizes);
//
//	Fill2DArrWithSeq(PP, Size1, Sizes);
//	cout << endl << endl;
//	PrintFull2DArray(PP, Size1, Sizes);
//
//}
////end main
//
//
//void PrintArray(int* A, int Size)
//{
//	for (int i = 0; i<Size; i++)
//		cout << A[i] << ", ";
//	cout << endl;
//}
//void PrintFull2DArray(int** PP, int Size1, int* Sizes)
//{
//	int* tempArr;
//	for (int i = 0; i<Size1; i++)
//	{
//		tempArr = *(PP + i);
//		cout << "Address of Side Chain=:" << tempArr << "\t";
//		for (int j = 0; j<Sizes[i]; j++)
//			cout << tempArr[j] << ",";
//		cout << endl;
//	}
//}
//int read(int i, int j, int** PP, int Size1, int* Sizes)
//{
//	//just like Arr[i][j]
//	int answer = -1;
//	int* tempArr;
//	if (i<Size1)
//		tempArr = *(PP + i);
//	if (j<Sizes[i])
//		answer = tempArr[j];
//	return answer;
//}
//void write(int i, int j, int value, int** PP, int Size1, int* Sizes)
//{
//	//just like Arr[i][j]=value
//	int* tempArr;
//	if (i<Size1)
//		tempArr = *(PP + i);
//	else
//		cout << "Error" << endl;
//	if (j<Sizes[i])
//		tempArr[j] = value;
//	else
//		cout << "Error" << endl;
//}
//void Fill2DArrWithSeq(int** PP, int Size1, int* Sizes)
//{
//	int value = 101;
//	for (int i = 0; i<Size1; i++)
//	{
//		for (int j = 0; j<Sizes[i]; j++)
//		{
//			write(i, j, value, PP, Size1, Sizes);
//			value++;
//		}
//	}
//}
