#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    bool found = true;
    char c;
    ofstream write;
    while(found)
    {
        cout<<"Do you want to Enter more data if Yes press 'Y' or if Not then you can press any other Character"<<endl;
        cin>>c;
        if(c == 'Y' || c == 'y')
        {
            cout<<"Enter User's Name and Phone Number"<<endl;
            cin.ignore();
            cin.getline(arr,100);
            write.open("Contacts.txt", ios::app);
            write<<arr<<endl;
			write.close();
        }
        else
        {
            found = false;
            cout<<"Program ended succesfully"<<endl;
            write.close();
        }
    }
    return 0;
}
