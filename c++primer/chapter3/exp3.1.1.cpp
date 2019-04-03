#include <iostream>
//using declaration, when we use the name "cin", get it from the name space "std"
using std::cin;

int main()
{
    int i;
    cin >> i; //correct: cin has the same meaning of std::cin
    std::cout << i; //correct: explicitly use cout from std
    return 0;
}