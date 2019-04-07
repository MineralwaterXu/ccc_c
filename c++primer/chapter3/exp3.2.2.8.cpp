#include <iostream>
#include <string>

int main()
{
    std::string s1 = "hello, ", s2 = "world\n";
    std::string s3 = s1 + s2;
    s1 += s2;
}