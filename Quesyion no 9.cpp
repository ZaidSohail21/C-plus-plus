//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 }; // Array to be sorted
//    int n = 7; // Number of elements in the array
//    bool swapped = false;
//    for (int i = 0; i < n - 1; i++)
//    {
//        /*swapped = false;*/
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            }
//            if (!swapped)
//            {
//                break;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << endl;
//    }
//    cout << "\n";
//    system("pause");
//    return 0;
//
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}