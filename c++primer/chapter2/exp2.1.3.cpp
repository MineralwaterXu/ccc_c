#include <iostream>

int main()
{
    std::cout << "a really ,really long string literal "
                 "that spans two lines" << std::endl;
    std::cout << '\n';
    std::cout << "\tHi!\n";
    std::cout << "Hi \x4do\115!\n";
    std::cout << '\115' << '\n';
    std::cin.get();
}