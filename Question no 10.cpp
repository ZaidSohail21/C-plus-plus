//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8 };
//	int n = 7;
//	int target = 6;
//	int low = 0, high = n - 1, mid;
//	bool found= false;
//	while (low <= high) 
//	{
//		mid = low + (high - low) / 2;
//		if (a[mid] == target)
//		{
//			found = true;
//			break;
//		}
//		else if (a[mid] < target)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//	if (found)
//	{
//		cout << "element found in the index of " << mid << endl;
//	}
//	else
//	{
//		cout << "element  not found in " << endl;
//	}
//		
//	cout << "\n";
//	system("pause");
//	return 0;
//}