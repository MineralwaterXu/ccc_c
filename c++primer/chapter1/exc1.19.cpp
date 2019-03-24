#include <iostream>

int main()
{
    int a, b = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    if (a >= b)
    {
        for (int i = b;i <= a;++i)
        {
            std::cout << i << std::endl;
        }
    }
    if (a < b)
    {
        for (int i = a; i <= b; ++i)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}