#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; //save the next variable of deal record
    //read the first deal record, and make sure that there are data to process
    if (std::cin >> total)
    {
        Sales_item trans; //save the variable of sum
        //read and process the rest deal record
        while (std::cin >> trans)
        {
            //if we are processing the same books
            if (total.isbn() == trans.isbn())
                total += trans; //update the total sales
            else 
            {
                //print the last book's result
                std::cout << total << std::endl;
                total = trans; //now, total indicates the next book's sales
            }
        }
        std::cout << total << std::endl; //print the last book's result
    }
    else 
    {
        //No input! warn the readers
        std::cerr << "No data?!" << std::endl;
        return -1; //indicate failure
    }
    return 0;
}