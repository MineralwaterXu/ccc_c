#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    //read one line each time, output the line with over 80 character
    while ( getline (cin, line) )
        if ( line.size() > 80)
            cout << line << endl;
    return 0;
}