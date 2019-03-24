#include <iostream>

int main()
{
    int sum = 0, value = 0;
    //read the data untill the end of the file, calculate the sum of all readed value.
    while (std::cin >> value)
        sum += value; //equals to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}