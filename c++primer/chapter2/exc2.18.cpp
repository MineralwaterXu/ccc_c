#include <iostream>

int main()
{
    int a = 0, b = 1;
    int *p1 = &a, *p2 = p1;
    p1 = &b;
    *p2 = b;
    std::cout << *p1 << *p2 << std::endl;
    std::cin.get();
}