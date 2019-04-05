#include <iostream>
//using declaration; when we use the name cin, we get the one from the namespace std
using std::cin;

int main()
{
    int i;
    cin >> i; //ok: cin is a synonym for std::cin
    std::cout << i; //ok: explicitly use cout from namepsace std
    return 0;
}