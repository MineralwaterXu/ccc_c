#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s; //empty string
    cin >> s; //put string into s until null
    cout << s << endl; //output s
    string s1, s2;
    cin >> s1 >> s2; //put first into s1, second into s2
    cout << s1 << s2 << endl; //output two strings
    return 0;
}