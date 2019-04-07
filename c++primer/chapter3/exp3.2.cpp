#include <iostream>
#include <string>
using std::string;

string s1; //default initialization, s1 is a empty string
string s2 = s1; //s2 is the copy of s1
string s3 = "hiya"; //s3 is the copy of the value of the string
string s4(10, 'c'); //the content of s4 is cccccccccc
string s5 = "hiya"; //copy initialization
string s6("hiya"); //directly initialization
string s7(10, 'c'); //directly initialization, the content of s7 is cccccccccc
string s8 = string(10, 'c'); //copy initialization, the content of s8 is cccccccccc
string temp(10, 'c'); //the content of temp is cccccccccc
string s9 = temp; //copy temp to s9