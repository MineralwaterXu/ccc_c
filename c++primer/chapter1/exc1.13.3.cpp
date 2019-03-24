#include <iostream>

int main()
{
    int v1, v2 = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    for (int i = v1, n = v2; i <= n; ++i)
        std::cout << i << std::endl;
    for (int i = v1, n = v2; i >= n; --i)
        std::cout << i << std::endl;
    return 0;
}