#include <iostream>

int main()
{
    //currVal is the number we are counting; we put new value into val
    int currVal = 0, val = 0;
    //read the first number, and make sure that there are data to process
    if (std::cin >> currVal)
    {
        int cnt = 1; //save numbers of the value which we are processing
        while (std::cin >> val) //read the rest numbers
        {
            if (val == currVal) //if they have the same value
                ++cnt;          //plus 1 to cnt
            else
            {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val; //save the new value
                cnt = 1;
            }
        } //while statement is over here
        //save and print the last number of the file
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    } //the outmost layer of if statement is over here
    system("pause");
    return 0;
}