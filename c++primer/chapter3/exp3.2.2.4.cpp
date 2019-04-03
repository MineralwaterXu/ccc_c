#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    //read one line each time, jump out when null appears
    while (getline (cin, line) )
        if ( !line.empty() )
            cout << line << endl;
    return 0;
}