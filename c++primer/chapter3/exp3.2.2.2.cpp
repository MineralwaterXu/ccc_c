#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word;
    while (cin >> word) //read again and again, until the end of the file
        cout << word << endl; //output character one by one, every single word follows a newline character
    return 0;
}