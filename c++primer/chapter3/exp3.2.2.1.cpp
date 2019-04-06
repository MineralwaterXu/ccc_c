#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s; //empty string
    cin >> s; //read a whitespace-separated string into s
    cout << s << endl; //write s to the output
    string s1, s2;
    cin >> s1 >> s2; //read first input into s1, second to s2
    cout << s1 << s2 << endl; //write both strings
    return 0;
}