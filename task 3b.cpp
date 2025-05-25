//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a[12];
//	a[11] =0;
//	a[12] =0 ;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (i % 2 == 0)
//		{
//			if (a[i] % 2 != 0)
//			{
//				cout << a[i];
//				a[11] = a[11] + a[i];
//			}
//		
//		}
//		else
//		{
//			if (a[i] % 2 == 0)
//			{
//				cout << a[i];	
//				a[12] = a[12] + a[i];
//			}
//		}
//
//	}
//	cout << a[11];
//	cout << a[12];
//	cout << "\n";
//	system("pause");
//	return 0;
//}