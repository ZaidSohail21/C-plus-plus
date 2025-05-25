//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Enter the number you wanted to add :";
//	cin >> n;
//	int* arr=new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Enter the value : ";
//		cin >> arr[i];
//	}
//	bool swapped;
//	for (int i = 0; n - 1; i++)
//	{
//		swapped = false;
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				swap(arr[j], arr[j + 1]);
//				swapped =true;
//			}
//			
//		}
//		if (!swapped)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "  " ;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}