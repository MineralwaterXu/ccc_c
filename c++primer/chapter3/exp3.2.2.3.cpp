#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    //read one line each time, until the end of the file
    while (getline (cin, line) )
        cout << line << endl;
    return 0;
}