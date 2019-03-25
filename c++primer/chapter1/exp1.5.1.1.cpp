#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    //read ISBN, the number we sold and price
    std::cin >> book;
    //write in ISBN, the number we sold, the total sales and average price
    std::cout << book << std::endl;
    return 0;
}