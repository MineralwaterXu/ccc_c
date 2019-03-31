#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 10;
    while (val >= 0)
    {
        sum += val;
        --val;
    }
    cout << "Sum of 10 to 0 inclusive is " << sum << endl;
    return 0;
}