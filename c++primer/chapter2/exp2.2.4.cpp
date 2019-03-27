#include <iostream>
//this program is only used to declear: it is inappropriate to define the new variable with the same name of global variable in function

int reused = 42;
int main()
{
    int unique = 0; //unique has block scope
    //print #1: use global variable reused; print 42 0
    std::cout << reused << " " << unique << std::endl;
    int reused = 0; //new local variable reused, which covered global variable reused
    //print #2: use local variable reused; print 0 0
    std::cout << reused << " " << unique << std::endl;
    //print #3: explicitly requests the global reused; prints 42 0
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}