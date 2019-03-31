#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v1, v2 = 0;
    cout << "Enter two numbers:" << endl;
    cin >> v1 >> v2;
    while (v1 < v2) 
    {
        cout << v1 << endl;
        ++v1;
    }
    while (v1 > v2)
    {
        cout << v2 << endl;
        ++v2;
    }
    cout << v1 << endl;
    return 0;
}