#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("zaid.txt");
    char ch[300] = "Time is good teacher but unfortunately it kills all of its panic friends";
    file << ch;
    file.close();
    return 0;
}