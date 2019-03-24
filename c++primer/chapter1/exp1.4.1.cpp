#include <iostream>

int main()
{
    int sum = 0, val = 1;
    //if the value of val less than or equal to 10, while statement will execute continuously.
    while (val <= 10)
    {
        sum += val; //give sum + val to sum
        ++val; //plus 1 to val
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}