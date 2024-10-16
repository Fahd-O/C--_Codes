#include <iostream>
#include <string>


int main ()
{
    std::string greeting = "assalamu 'alaikum";
    std::cout << greeting[0] << std::endl;//string indexing starts from zero. empty string (without initializing it to anything) prints a blank space like this ""

    greeting += " !"; //appending to a string
    std::cout << greeting << std::endl;

    std::string camel = "desert ";
    std::cout << camel + "land" << std::endl;//concatenation in c++
    std::cout <<camel.length() << std::endl;//methods = member function = functions attached to objects. functions are on their own, while methods are attached to objects using the dot "." operator

}