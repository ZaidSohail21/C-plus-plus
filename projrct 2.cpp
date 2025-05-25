#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("zaid.txt");
    char ch[300] = "time is a good teacher";
    file << ch;
    file.close();
    return 0;
}
